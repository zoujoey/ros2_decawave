import rclpy
from rclpy.node import Node
from decawave_interfaces.msg import DecaRangeB
import serial
import time

class publishernode(Node):
    def __init__(self, n, anchor_ids, portt, anchor_id, tag_id):
        #Inherit
        super().__init__("decawave_pub2")

        #Connect to Serial Port
        try:
            self.ser = serial.Serial(port=portt, baudrate=115200, timeout=1) #COM port may be different for Linux
        except:
            self.ser = ''
        
        #Publisher Initialiser
        self.counter = 0
        self.n = n
        self.anchor_ids = anchor_ids
        self.anchor_id = anchor_id
        self.tag_id = tag_id
        self.decawave_publisher2 = self.create_publisher(
            DecaRangeB, "Dist4_2", 10)
        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self.publish_data)
        self.time = time.time()
    
    def send_cmd(self, cmd):#Sending les cmd to port
        self.ser.write(cmd + b'\r\n')
        resp = self.ser.readline().decode().strip()
        return resp
    
    def get_dist(self): #Getting Distance From Port
        dummy = 'D633[4.43,0.00,0.00]=2.60 9620[5.41,5.08,0.00]=2.74 919B[2.31,4.92,0.00]=4.35 CC2E[0.00,0.00,0.00]=6.23'
        try: 
            resp = self.ser.readline().decode().strip()
            if len(resp)<100:
                return dummy
            elif len(resp)>105:
                return dummy
            return resp
        except:
            return dummy
        
    def parse_data(self, s):
        if len(s)<100:
            return None
        elif len(s)>105:
            return None
        substrings = s.split()
        results = {}
        for substring in substrings:
            tag = substring[:4]
            if tag=='le_u': 
                pass
            elif tag == 'est[':
                pass
            values_str = substring.split('=')[0]
            values_str1 = values_str.split('[')[1]
            values_str1 = values_str1.strip(']')
            values_list = [float(x) for x in values_str1.split(',')]
            values_list.append(float(substring.split('=')[1]))
            results[tag] = values_list
        return (results)
    
    def publish_data(self): #Publishing the raw data as a string
        dist = self.parse_data(self.get_dist())
        msg = DecaRangeB()
        self.counter+=1
        timecurr = time.time()-self.time
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = self.anchor_id
        msg.range = dist[self.anchor_id][3]
        msg.to_id = self.anchor_id
        msg.from_id = self.tag_id
        cmd = msg.from_id+": "+str(msg.range)
        self.get_logger().info("Data_Published: "+cmd)
        self.decawave_publisher2.publish(msg)

def main(args = None):
    rclpy.init(args = args)
    anchor_ids = ["D633","9620","919B","CC2E"]
    n=4
    node1 = publishernode(n,anchor_ids,'/dev/ttyACM0','D633','9325')
    # node2 = publishernode(n,anchor_ids,'COM 18','9620','9325')
    # node3 = publishernode(n,anchor_ids,'COM 18','919B','9325')
    # node4 = publishernode(n,anchor_ids,'COM 18', 'CC2E','9325')
    rclpy.spin(node1)
    # rclpy.spin(node2)
    # rclpy.spin(node3)
    # rclpy.spin(node4)
    rclpy.shutdown()
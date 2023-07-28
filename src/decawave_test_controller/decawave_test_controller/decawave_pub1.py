import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import serial
import time

class publishernode(Node):
    def __init__(self, n, anchor_ids, portt):
        #Inherit
        super().__init__("decawave_pub1")

        #Connect to Serial Port
        try:
            self.ser = serial.Serial(port=portt, baudrate=115200, timeout=1) #COM port may be different for Linux
        except:
            self.ser = ''
        
        #Publisher Initialiser
        self.counter = 0
        self.n = n
        self.anchor_ids = anchor_ids
        self.decawave_publisher1 = self.create_publisher(
            String, "Dist4", 10)
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
            elif len(resp)>140:
                return dummy
            return resp
        except:
            return dummy
        
    def publish_data(self): #Publishing the raw data as a string
        msg = String()
        self.counter+=1
        timecurr = time.time()-self.time
        msg.data = str(timecurr)+" "+self.get_dist()
        cmd = msg.data
        self.get_logger().info("Data_Published: "+cmd)
        self.decawave_publisher1.publish(msg)

def main(args = None):
    rclpy.init(args = args)
    anchor_ids = ["D633","9620","919B","CC2E"]
    n=4
    node = publishernode(n,anchor_ids,'/dev/ttyACM0')
    rclpy.spin(node)
    rclpy.shutdown()
import rclpy
from rclpy.node import Node
from decawave_interfaces.msg import DecaRangeB
import serial
import matplotlib.pyplot as plt
import time

class publishernode(Node):
    def __init__(self,portt):
        #Inherit
        super().__init__("decawave_pub4")

        #Connect to Serial Port
        try:
            self.ser = serial.Serial(port=portt, baudrate=115200, timeout=1) #COM port may be different for Linux
        except:
            self.ser = ''
        
        #Publisher Initialiser
        self.counter = 0
        self.decawave_publisher4 = self.create_publisher(
            DecaRangeB, "/Wifi/Channel_Three", 10)
        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self.publish_data)
        self.time = time.time()
        self.tag_data = {}
        self.resp = ''
    
    def send_cmd(self, cmd):#Sending les cmd to port
        self.ser.write(cmd + b'\r\n')
        resp = self.ser.readline().decode().strip()
        return resp
    
    def get_dist(self): #Getting Distance From Port
        dummy = 'POS,1,9325,5.54,2.83,0.89,73,x05'
        try: 
            resp = self.ser.readline().decode().strip()
            self.resp = resp
            if len(resp)>40:
                return dummy
            elif len(resp)<20:
                return dummy
            return resp
        except:
            return dummy
        
    def parse_data(self, s):
        if len(s)>40:
            return None
        elif len(s)<20:
            return None
        substrings = s.split(',')
        self.get_logger().info(str(substrings))
        tag = substrings[2]
        pos = []
        pos.append(tag)
        pos.append(float(substrings[3]))
        pos.append(float(substrings[4]))
        pos.append(float(substrings[5]))
        return pos
    
    def publish_data(self): #Publishing the raw data as a string
        dist = self.parse_data(self.get_dist())
        msg = DecaRangeB()
        self.counter+=1
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.tag_id, msg.x1, msg.y1, msg.z1 = dist[0], dist[1], dist[2], dist[3]
        cmd = str(msg.tag_id)+": "+str(msg.x1)+" "+str(msg.y1)+" "+str(msg.z1)
        self.get_logger().info("Data_Published: "+cmd)
        self.decawave_publisher4.publish(msg)
        
        tag_id = msg.tag_id
        x = msg.x1
        y = msg.y1
        z = msg.z1

        # Record the data and timestamp
        timestamp = time.time()  # Use rospy.get_time() for ROS 1
        if tag_id not in self.tag_data:
            self.tag_data[tag_id] = {'x_data': [], 'y_data': [], 'z_data': [], 'timestamps': []}

        self.tag_data[tag_id]['x_data'].append(x)
        self.tag_data[tag_id]['y_data'].append(y)
        self.tag_data[tag_id]['z_data'].append(z)
        self.tag_data[tag_id]['timestamps'].append(timestamp)

        # Plot the data
        plt.clf()
        for tag_id, data in self.tag_data.items():
            plt.plot(data['timestamps'], data['x_data'], label=f'{tag_id}_X')
            plt.plot(data['timestamps'], data['y_data'], label=f'{tag_id}_Y')
            plt.plot(data['timestamps'], data['z_data'], label=f'{tag_id}_Z')

        plt.xlabel('Time')
        plt.ylabel('Position')
        plt.legend()
        plt.grid(True)
        plt.title('Tag Positions vs Time')
        plt.pause(0.01)

def main(args = None):
    rclpy.init(args = args)
    node1 = publishernode('/dev/ttyACM0')
    rclpy.spin(node1)
    rclpy.shutdown()
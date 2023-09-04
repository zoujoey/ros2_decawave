import rclpy
from rclpy.node import Node
from decawave_interfaces.msg import DecaRangeB
import serial
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
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
        self.fig = plt.figure()
        self.ax = plt.axes(projection='3d')
        self.fig.canvas.mpl_connect('close_event', self.save_plot)
    
    def send_cmd(self, cmd):#Sending les cmd to port
        self.ser.write(cmd + b'\r\n')
        resp = self.ser.readline().decode().strip()
        return resp
    
    def get_dist(self): #Getting Distance From Port
        #dummy = 'POS,1,9325,0.40,2.03,0.60,73,x05'
        dummy = 'POS,1,9325,0.00,-0.15,0.60,73,x05'
        try: 
            resp = self.ser.readline().decode().strip()
            self.resp = resp
            if len(resp)>35:
                return dummy
            elif len(resp)<20:
                return dummy
            return resp
        except:
            return dummy
        
    def parse_data(self, s):
        if len(s)>35:
            return None
        elif len(s)<25:
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
        self.ax.clear()
        # Plot the data
        plt.title('Tag Positions X vs Tag Positions Y vs Tag Positions Z')

        self.ax.plot(self.tag_data[tag_id]['x_data'], self.tag_data[tag_id]['y_data'], self.tag_data[tag_id]['z_data'], color = "red")

        # Set labels and title
        self.ax.set_xlabel('X')
        self.ax.set_ylabel('Y')
        self.ax.set_zlabel('Z')
        self.ax.set_title('Position Trajectory')
        plt.draw()
        plt.pause(0.001)
    def save_plot(self, event):
        self.ax.figure.savefig('UWB_position_trajectory.png')
        print("Plot saved as 'UWB_position_trajectory.png'")

def main(args = None):
    rclpy.init(args = args)
    node1 = publishernode('/dev/ttyACM0')
    rclpy.spin(node1)
    rclpy.shutdown()
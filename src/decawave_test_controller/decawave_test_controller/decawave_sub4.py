import rclpy
from rclpy.node import Node
from decawave_interfaces.msg import DecaRangeB
import matplotlib.pyplot as plt
import time

class MySubscriber(Node):
    def __init__(self):
        super().__init__('my_subscriber')
        self.subscription = self.create_subscription(
            DecaRangeB,
            '/Wifi/Channel_Three',
            self.my_message_callback,
            10
        )
        self.tag_data = {}

    def my_message_callback(self, msg):
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

def main(args=None):
    rclpy.init(args=args)
    my_subscriber = MySubscriber()
    rclpy.spin(my_subscriber)
    my_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

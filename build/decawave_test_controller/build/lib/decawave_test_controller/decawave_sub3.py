import rclpy
from rclpy.node import Node
from decawave_interfaces.msg import DecaRange
from std_msgs.msg import String
import matplotlib.pyplot as plt
from datetime import datetime

class subscribernode(Node):
    def __init__(self, n, anchor_ids):
        super().__init__("decawave_sub3")
        self.n = n
        self.anchor_ids = anchor_ids
        self.id_map_rev = ["0000", "9325", "D633", "9620", "919B", "CC2E", "872B", "9401", "D721", "98A7"]
        self.times = []
        self.distances = []

        self.decawave_subscriber3 = self.create_subscription(
            DecaRange, "Dist4_3", self.subscribe_data, 10)

        self.fig, self.ax = plt.subplots()
        self.line, = self.ax.plot([], [], 'b', label='Distance')
        self.ax.set_xlabel('Time')
        self.ax.set_ylabel('Distance')
        self.ax.legend()

    def time_to_timestamp(self, time):
        # Convert the custom ROS time to a numerical timestamp
        return time.sec + time.nanosec * 1e-9

    def subscribe_data(self, datum: DecaRange):
        time_stamp = self.time_to_timestamp(datum.header.stamp)
        anchor_id = self.id_map_rev[datum.from_id]
        tag_id = self.id_map_rev[datum.to_id]
        distance = datum.range

        self.get_logger().info(f"Time: {time_stamp} AnchorID: {anchor_id} Tag: {tag_id} Distance: {distance}")

        self.times.append(time_stamp)
        self.distances.append(distance)

        # Update the plot
        self.line.set_data(self.times, self.distances)
        self.ax.relim()
        self.ax.autoscale_view()
        self.fig.canvas.draw()
        plt.pause(0.1)  # Pause for 0.1 seconds to update the plot

def main(args=None):
    rclpy.init(args=args)
    anchor_ids = ["D633", "9620", "919B", "CC2E"]
    n = 4
    node = subscribernode(n, anchor_ids)

    try:
        while rclpy.ok():
            rclpy.spin_once(node)
    except KeyboardInterrupt:
        # Handle Ctrl+C to gracefully exit the loop
        pass

    plt.show()

    rclpy.shutdown()

if __name__ == '__main__':
    main()

import rclpy
from rclpy.node import Node
from decawave_interfaces.msg import DecaRangeB
from std_msgs.msg import String

class subscribernode(Node):
    def __init__(self, n, anchor_ids):
        super().__init__("decawave_sub2")
        self.n = n
        self.anchor_ids = anchor_ids
        self.decawave_subscriber2 = self.create_subscription(
            DecaRangeB, "Dist4_2", self.subscribe_data, 10)
    
    def subscribe_data(self, datum:DecaRangeB):
        pdata = "Time: " +str(datum.header.stamp)+" AnchorID: " + str(datum.from_id) + "Tag: " + str(datum.to_id)+ " Distances: " + str(datum.range)
        self.get_logger().info(pdata)
def main(args = None):
    rclpy.init(args = args)
    anchor_ids = ["D633","9620","919B","CC2E"]
    n=4
    node = subscribernode(n,anchor_ids)
    rclpy.spin(node)
    rclpy.shutdown()    

    
    

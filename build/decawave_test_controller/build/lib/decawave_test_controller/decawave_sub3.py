import rclpy
from rclpy.node import Node
from decawave_interfaces.msg import DecaRange
from std_msgs.msg import String

class subscribernode(Node):
    def __init__(self, n, anchor_ids):
        super().__init__("decawave_sub3")
        self.n = n
        self.anchor_ids = anchor_ids
        self.decawave_subscriber3 = self.create_subscription(
            DecaRange, "Dist4_3", self.subscribe_data, 10)
        self.id_map_rev = ["0000","9325","D633","9620","919B","CC2E","872B","9401","D721","98A7"]
    def subscribe_data(self, datum:DecaRange):
        pdata = "Time: " +str(datum.header.stamp)+" AnchorID: " + str(self.id_map_rev[datum.from_id]) + "Tag: " + str(self.id_map_rev[datum.to_id])+ " Distances: " + str(datum.range)
        self.get_logger().info(pdata)
def main(args = None):
    rclpy.init(args = args)
    anchor_ids = ["D633","9620","919B","CC2E"]
    n=4
    node = subscribernode(n,anchor_ids)
    rclpy.spin(node)
    rclpy.shutdown()    

    
    

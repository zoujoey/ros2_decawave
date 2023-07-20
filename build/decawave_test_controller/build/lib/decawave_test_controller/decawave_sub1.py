import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class subscribernode(Node):
    def __init__(self, n, anchor_ids):
        super().__init__("decawave_sub1")
        self.n = n
        self.anchor_ids = anchor_ids
        self.decawave_subscriber1 = self.create_subscription(
            String, "Dist4", self.subscribe_data, 10)
    
    def parse_data(self, s): #Parsing Data From Port into Numerical Data
        substrings = s.split()
        results = {}
        for substring in substrings:
            if ':' in substring:
                continue
            elif '[' in substring:
                tag = substring[:4]
                values_str = substring.split('=')[0]
                values_str1 = values_str.split('[')[1]
                values_str1 = values_str1.strip(']')
                values_list = [float(x) for x in values_str1.split(',')]
                values_list.append(float(substring.split('=')[1]))
                results[tag] = values_list
            else:
                results["TIME"] = float(substring)
        return (results)
    
    def subscribe_data(self, datum:String):
        dist = self.parse_data(datum.data)
        dist_lst = []
        for i in range(self.n):
            dist_lst.append(dist[self.anchor_ids[i]][3])
        current_time = dist["TIME"]
        current_values = dist_lst
        pdata = "Time: " +str(current_time)+" AnchorIDs: " + str(self.anchor_ids) + " Distances: " + str(dist_lst)
        self.get_logger().info("Data received: "+pdata)
def main(args = None):
    rclpy.init(args = args)
    anchor_ids = ["D633","9620","919B","CC2E"]
    n=4
    node = subscribernode(n,anchor_ids)
    rclpy.spin(node)
    rclpy.shutdown()    

    
    

#include <ros/ros.h>
#include <stdlib.h>
#include "std_msgs/int32.h"



int main(int argc, char **argv) {
    ros::init(argc, argv, "pub_node1");
    ros::NodeHandle nh;

    ros::Publisher pub = nh.advertise<std_msgs::Int32>("topic2", 1000);
    srand(time(0))
    ros::Rate rate(2);

    
    while (ros::ok())
    {
        std_msgs::Int32 num;

        num = rand() % 1000 + 1;
        ROS_INFO("topic 2: %d", num);
        pub.publish(num);
        ros::spinOnce();
        rate.sleep();

    }
}
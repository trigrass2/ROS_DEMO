#include <handsfree_hw/hf_hw_ros.h>

int main(int argc, char** argv)
{
    ros::init(argc, argv, "robothw");
    ros::NodeHandle nh("handsfree");
    handsfree_hw::HF_HW_ros hf(nh, "serial:///dev/ttyUSB0", "/home/kedou/ros_workspace/HANDS_FREE_WS/src/handsfree_hw/config.txt");
    hf.mainloop();
    return 0;
}

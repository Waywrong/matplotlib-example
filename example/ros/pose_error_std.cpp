#include "ros/ros.h"
#include <cmath>
#include "matplotlibcpp.h"

namespace plt = matplotlibcpp;

int main(int argc, char **argv)
{
  ros::init(argc, argv, "ros_matplotlibcpp");
  ros::NodeHandle nh;
  ros::Rate r(100);
	
  while(ros::ok())
  {
    r.sleep();
    ros::spinOnce();
  }
  return 0;
}

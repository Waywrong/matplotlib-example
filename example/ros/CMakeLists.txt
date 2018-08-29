cmake_minimum_required(VERSION 2.8.3)
project(renbo_s)

find_package(catkin REQUIRED COMPONENTS
  actionlib
  actionlib_msgs
  geometry_msgs
  nav_msgs
  std_msgs
  roscpp
  tf
)

find_package(PythonLibs 2.7)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES m700_uturn_server
#  CATKIN_DEPENDS actionlib actionlib_msgs geometry_msgs roscpp tf
#  DEPENDS system_lib
)

include_directories(
  ${catkin_INCLUDE_DIRS}
  ${PYTHON_INCLUDE_DIRS}
)

add_executable(pose_error_std src/pose_error_std.cpp)


target_link_libraries(pose_error_std
 ${catkin_LIBRARIES}
 ${PYTHON_LIBRARIES}
)

install(TARGETS pose_error_std 
 ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
 LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
 RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)

install(DIRECTORY launch rviz
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
)

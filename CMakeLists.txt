cmake_minimum_required(VERSION 2.8.3)
project(JuniorTutorial)

## Find catkin and any catkin packages
find_package(catkin REQUIRED COMPONENTS roscpp rospy std_msgs genmsg)

## Declare ROS messages and services
#add_message_files(FILES Num.msg)
#add_service_files(FILES AddTwoInts.srv)

## Generate added messages and services
#generate_messages(DEPENDENCIES std_msgs)

## Declare a catkin package
catkin_package()

## Build talker and listener
include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(talker talker.cpp)
target_link_libraries(talker ${catkin_LIBRARIES})
add_dependencies(talker JuniorTutorial_generate_messages_cpp)

#add_executable(talker2 talker2.cpp)
#target_link_libraries(talker2 ${catkin_LIBRARIES})
#add_dependencies(talker2 JuniorTutorial_generate_messages_cpp)

add_executable(listener listener.cpp)
target_link_libraries(listener ${catkin_LIBRARIES})
add_dependencies(listener JuniorTutorial_generate_messages_cpp)
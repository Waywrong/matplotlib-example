cmake_minimum_required(VERSION 3.1)
project(matplotlib_example)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(PythonLibs 2.7)

add_executable(matplotlib_example main.cpp)
add_executable(errorbar example/Errorbar.cpp)
add_executable(histogram example/histogram.cpp)

target_include_directories(matplotlib_example PRIVATE ${PYTHON_INCLUDE_DIRS})
target_include_directories(errorbar PRIVATE ${PYTHON_INCLUDE_DIRS})
target_include_directories(histogram PRIVATE ${PYTHON_INCLUDE_DIRS})

target_link_libraries(matplotlib_example ${PYTHON_LIBRARIES})
target_link_libraries(errorbar ${PYTHON_LIBRARIES})
target_link_libraries(histogram ${PYTHON_LIBRARIES})

install(TARGETS matplotlib_example errorbar histogram RUNTIME DESTINATION bin)

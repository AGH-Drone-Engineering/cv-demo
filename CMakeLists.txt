cmake_minimum_required(VERSION 3.12)
project(cvdemo)

set(CMAKE_CXX_STANDARD 11)

find_package(OpenCV REQUIRED)
message(STATUS "OpenCV version: ${OpenCV_VERSION}")

add_executable(demo demo.cpp)
target_link_libraries(demo PRIVATE ${OpenCV_LIBS})

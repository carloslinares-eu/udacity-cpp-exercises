cmake_minimum_required(VERSION 3.24)
project(pyramid_exercise)

set(CMAKE_CXX_STANDARD 20)

add_executable(pyramid pyramid/pyramid.cpp)
add_executable(student student/student.cpp)
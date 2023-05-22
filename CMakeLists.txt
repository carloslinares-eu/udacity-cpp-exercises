cmake_minimum_required(VERSION 3.24)
project(pyramid_exercise)

set(CMAKE_CXX_STANDARD 20)

add_executable(pyramid pyramid/pyramid.cpp)
add_executable(student student/student.cpp)
add_executable(sphere sphere/sphere.cpp)
add_executable(inheritance01 inheritance01/inheritance01.cpp)
add_executable(inheritance02 inheritance02/inheritance02.cpp)
add_executable(animal animal/animal.cpp)
cmake_minimum_required(VERSION 3.24)
project(pyramid_exercise)

set(CMAKE_CXX_STANDARD 20)

add_executable(pyramid pyramid.cpp)
add_executable(student student/student.cpp)
add_executable(sphere sphere.cpp)
add_executable(animal animal.cpp)

add_executable(inheritance01 inheritance01.cpp)
add_executable(inheritance02 inheritance02.cpp)
add_executable(inheritance03 inheritance03.cpp)
add_executable(inheritance04 inheritance04.cpp)
add_executable(inheritance05 inheritance05.cpp)
add_executable(inheritance06 inheritance06.cpp)

add_executable(polymorphism01 polymorphism01.cpp)
add_executable(polymorphism02 polymorphism02.cpp)
add_executable(polymorphism03 polymorphism03.cpp)
add_executable(polymorphism04 polymorphism04.cpp)

add_executable(overriding overriding.cpp)

add_executable(template01 template01.cpp)
add_executable(template02 template02.cpp)

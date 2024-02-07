cmake_minimum_required(VERSION 3.25)
project(_102___Shape_Hierarchy)

set(CMAKE_CXX_STANDARD 17)

add_executable(_102___Shape_Hierarchy ShapeTest.cpp IShape.h Helper.h Circle.h Rectangle.h Triangle.h)

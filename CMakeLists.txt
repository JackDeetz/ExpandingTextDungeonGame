cmake_minimum_required(VERSION 3.19)
project(Final_Project)

set(CMAKE_CXX_STANDARD 14)

include_directories("${FinalProject}/inc/")

add_executable(
        Character.h gameDemo.cpp Environment.cpp Environment.h Character.cpp)

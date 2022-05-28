cmake_minimum_required(VERSION 3.19)
project(Final_Project)

set(CMAKE_CXX_STANDARD 14)

include_directories("${FinalProject}/inc/")

add_executable(
        FinalProject gameDemo.cpp Character.h Environment.cpp Environment.h Character.cpp)

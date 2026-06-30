cmake_minimum_required(VERSION 3.26)
project(Template_Class)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Template_Class
        Feedback.cpp
        Feedback.h
        main.cpp)

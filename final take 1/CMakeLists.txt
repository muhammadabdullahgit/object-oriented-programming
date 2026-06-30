cmake_minimum_required(VERSION 3.26)
project(2024_spring_se102la_week16_bsse23100)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(nlohmann)

add_executable(2024_spring_se102la_week16_bsse23100
        nlohmann/json.hpp
        .gitignore
        Assignment.cpp
        Assignment.h
        assignment1.json
        assignment2.json
        assignment3.json
        assignment4.json
        assignment5.json
        AssignmentManagement.cpp
        AssignmentManagement.h
        course.json
        Final.cpp
        Final.h
        final1.json
        main.cpp
        Makefile
        Management.cpp
        Management.h
        MidTerm.cpp
        MidTerm.h
        midterm1.json
        Project.cpp
        Project.h
        project1.json
        Quiz.cpp
        Quiz.h
        quiz1.json
        quiz10.json
        quiz2.json
        quiz3.json
        quiz4.json
        quiz5.json
        quiz6.json
        quiz7.json
        quiz8.json
        quiz9.json
        Student.cpp
        Student.h)

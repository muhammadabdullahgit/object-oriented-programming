cmake_minimum_required(VERSION 3.26)
project(2024_spring_se102la_final_retake_bsse23100)

set(CMAKE_CXX_STANDARD 14)

include_directories(nlohmann)

add_executable(2024_spring_se102la_final_retake_bsse23100
        json/invoices.json
        json/salaries.json
        json/transactions.json
        nlohmann/json.hpp
        .gitignore
        main.cpp
        Makefile
        README.md
        Management.h
        Transactions.h
        Transactions.cpp
        Management.cpp
        Invoice.h
        Invoice.cpp
        Salaries.h
        Salaries.cpp
        Client.h
        Client.cpp
)

cmake_minimum_required(VERSION 3.23)
project(Networking)

set(CMAKE_CXX_STANDARD 14)

add_library(Networking
        src/adress.cpp
        include/adress.h
        src/ip_adress.cpp
        include/ip_adress.h
        src/mac_adress.cpp
        include/mac_adress.h
        )

target_include_directories(Networking PUBLIC include)

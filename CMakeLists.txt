cmake_minimum_required(VERSION 3.23)
project(Ukol)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(Networking)

add_executable(Ukol main.cpp)

target_link_libraries(Ukol Networking)
target_include_directories(Ukol PUBLIC Networking/include)

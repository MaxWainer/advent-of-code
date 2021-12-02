cmake_minimum_required(VERSION 3.21)
project(advent_of_code)

set(CMAKE_CXX_STANDARD 23)

add_executable(advent_of_code first_day/first_day.cpp main.cpp first_day/first_day.hpp second_day/second_day.cpp second_day/second_day.hpp)

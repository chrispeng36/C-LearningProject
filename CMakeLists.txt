cmake_minimum_required(VERSION 3.20)
project(cppProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(cppProject
        SortAlgrithms/Top10Sorts.cpp)

add_executable(Top10Sorts SortAlgrithms/Top10Sorts.cpp)
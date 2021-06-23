cmake_minimum_required(VERSION 3.19)
project(Sort-Algorithm-Analysis-2021)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(Sort-Algorithm-Analysis-2021
        main.cpp
        src/BubbleSort.cpp
        src/Dataset.cpp
        src/QuickSort.cpp
        src/SelectSort.cpp
        src/SortShow.cpp)

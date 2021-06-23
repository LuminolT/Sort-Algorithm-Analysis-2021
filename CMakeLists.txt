cmake_minimum_required(VERSION 3.19)
project(Sort-Algorithm-Analysis-2021)

set(CMAKE_CXX_STANDARD 14)

add_executable(Sort-Algorithm-Analysis-2021
        src/main.cpp
        src/class/Dataset.cpp
        src/header/Dataset.h
        src/class/SelectSort.cpp
        src/header/SelectSort.h
        src/class/BubbleSort.cpp
        src/header/BubbleSort.h
        src/class/QuickSort.cpp
        src/header/QuickSort.h
        src/class/SortShow.cpp
        src/header/SortShow.h)
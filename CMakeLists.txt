cmake_minimum_required(VERSION 3.19)
project(Sort-Algorithm-Analysis-2021)

set(CMAKE_CXX_STANDARD 14)

add_executable(Sort-Algorithm-Analysis-2021
        main.cpp

        src/Dataset.cpp
        src/SelectSort.cpp
        src/BubbleSort.cpp
        src/QuickSort.cpp
        src/SortShow.cpp

        src/include/Dataset.h
        src/include/SelectSort.h
        src/include/BubbleSort.h
        src/include/QuickSort.h
        src/include/SortShow.h)
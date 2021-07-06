cmake_minimum_required(VERSION 3.19)
project(Sort-Algorithm-Analysis-2021)

set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

set(CMAKE_PREFIX_PATH "C:\\Qt\\5.15.1\\mingw81_64\\")


include_directories(${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/ui)

MATH(EXPR stack_size "8*1024*1024")
set(CMAKE_EXE_LINKER_FLAGS "-Wl,--stack,${stack_size}")

#find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
#find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)


aux_source_directory(. ALL_SRCS)
add_subdirectory(src)
add_executable(Sort-Algorithm-Analysis-2021 ${ALL_SRCS} ui/mainwindow.cpp ui/mainwindow.cpp ui/mainwindow.h ui/mainwindow.ui)
#
target_link_libraries(Sort-Algorithm-Analysis-2021 Sort)

target_link_libraries(Sort-Algorithm-Analysis-2021 winmm)

target_link_libraries(Sort-Algorithm-Analysis-2021 Qt)

find_package(Qt5Widgets REQUIRED)

target_link_libraries(Sort-Algorithm-Analysis-2021 Qt5::Widgets)
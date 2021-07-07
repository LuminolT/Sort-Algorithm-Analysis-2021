cmake_minimum_required(VERSION 3.19)
project(Sort-Algorithm-Analysis-2021)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

set(CMAKE_PREFIX_PATH C:/Qt/5.15.1/mingw81_64)      ## QT
#set(CMAKE_PREFIX_PATH "C:\\Qt\\5.15.1\\mingw81_64\\")

#find_package(Qt5Widgets REQUIRED)


set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)


include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/ui)

MATH(EXPR stack_size "8*1024*1024")
set(CMAKE_EXE_LINKER_FLAGS "-Wl,--stack,${stack_size}")

find_package(Qt5Widgets)
find_package(Qt5Core)
find_package(Qt5Gui)

set(UI_FILES)
set(RC_FILES)
set(QRC_FILES)

aux_source_directory(. ALL_SRCS)
add_subdirectory(src)
add_executable(Sort-Algorithm-Analysis-2021 ${ALL_SRCS} ui/sortwindow.cpp ui/sortwindow.h ui/sortwindow.ui)
#
target_link_libraries(Sort-Algorithm-Analysis-2021 Sort)
#target_link_libraries(Sort-Algorithm-Analysis-2021 QtUi)
target_link_libraries(Sort-Algorithm-Analysis-2021 Qt5::Widgets)
target_link_libraries(Sort-Algorithm-Analysis-2021 winmm)

#target_link_libraries(Sort-Algorithm-Analysis-2021 Qt)

qt5_use_modules(Sort-Algorithm-Analysis-2021 Core Widgets Gui)

#target_link_libraries(Sort-Algorithm-Analysis-2021 Qt5::Widgets)
cmake_minimum_required(VERSION 3.19)
project(Sort-Algorithm-Analysis-2021)

set(CMAKE_CXX_STANDARD 17)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

include_directories(${PROJECT_SOURCE_DIR}/include)

aux_source_directory(. ALL_SRCS)
add_subdirectory(src)
add_executable(Sort-Algorithm-Analysis-2021 ${ALL_SRCS} include/Student.h)

target_link_libraries(Sort-Algorithm-Analysis-2021 Sort)
cmake_minimum_required(VERSION 3.7)
project(heaps)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Heap.h)
add_executable(heaps ${SOURCE_FILES})
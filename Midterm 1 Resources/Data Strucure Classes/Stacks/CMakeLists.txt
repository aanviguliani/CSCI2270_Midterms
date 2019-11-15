cmake_minimum_required(VERSION 3.12)
project(Stacks)

set(CMAKE_CXX_STANDARD 14)

add_executable(Stacks main.cpp stacks.cpp stacks.h LinkedList.cpp LinkedList.h)
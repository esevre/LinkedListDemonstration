cmake_minimum_required(VERSION 3.12)
project(LinkedListDemo)

set(CMAKE_CXX_STANDARD 17)

add_executable(LinkedListDemo
        main.cpp
        LinkedListRawPointer.cpp
        LinkedListRawPointer.hpp
        LinkedListSharedPointer.cpp
        LinkedListSharedPointer.hpp
        BasicList.cpp BasicList.hpp memory_playground.hpp)
cmake_minimum_required(VERSION 3.26)
project(hanoi)

set(CMAKE_CXX_STANDARD 17)

add_executable(hanoi main.cpp
        constants.h
        Disk.cpp
        Disk.h
        Tower.cpp
        Tower.h
        Game.cpp
        Game.h)

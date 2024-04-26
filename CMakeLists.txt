cmake_minimum_required(VERSION 3.27)
project(Cdataframe C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Cdataframe
        cdataframe.c
        cdataframe.h
        column.c
        column.h
        main.c)

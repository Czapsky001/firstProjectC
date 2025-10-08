cmake_minimum_required(VERSION 3.10)
project(firstTask C)

set(CMAKE_C_STANDARD 11)

add_library(firstTask STATIC library.c)

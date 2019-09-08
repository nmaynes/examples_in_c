cmake_minimum_required(VERSION 3.14)
project(c_programming_lang C)

set(CMAKE_C_STANDARD 99)

add_executable(c_programming_lang main.c examples.c examples.h)
cmake_minimum_required(VERSION 3.23)
project(tree C)

set(CMAKE_C_STANDARD 23)

add_executable(tree main.c tree.h dos.h dst.h unitree.h)

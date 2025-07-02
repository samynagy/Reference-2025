MATH(EXPR stack_size "1024 * 1024 * 1024")
set(CMAKE_EXE_LINKER_FLAGS "-Wl,--stack,${stack_size}")
cmake_minimum_required(VERSION 3.26)

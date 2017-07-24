cmake_minimum_required(VERSION 3.8)
project(DataStructureAlgorithm)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c dynamic_array.c dynamic_array.h queue.c queue.h stack.c stack.h sort_array.c sort_array.h gcd.c gcd.h pointer_function.c pointer_function.h)
add_executable(DataStructureAlgorithm ${SOURCE_FILES})
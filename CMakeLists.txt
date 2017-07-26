cmake_minimum_required(VERSION 3.8)
project(DataStructureAlgorithm)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c dynamic_array.c dynamic_array.h queue.c queue.h stack.c stack.h sort_array.c sort_array.h gcd.c gcd.h pointer_function.c pointer_function.h queue_enviroment.c queue_enviroment.h queue2.c queue2.h string_operation.c string_operation.h sort.c sort.h test_sort.c test_sort.h overload_method.c overload_method.h test_union.c test_union.h two_way_merge.c two_way_merge.h my_search.c my_search.h test_my_search.c test_my_search.h test_file.c test_file.h)
add_executable(DataStructureAlgorithm ${SOURCE_FILES})
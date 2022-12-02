cmake_minimum_required(VERSION 3.22)
project(rt_challenge4)

set(CMAKE_CXX_STANDARD 23)

add_compile_options(-Werror -Wall -Wextra -Wpedantic)

set(PROGRAM_OUTPUT_DIR ${CMAKE_CURRENT_BINARY_DIR})

enable_testing()

add_subdirectory(utillib)
add_subdirectory(raytracerlib)
add_subdirectory(programs)
add_subdirectory(tests)
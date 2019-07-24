cmake_minimum_required(VERSION 2.80)

project(Hello)

message(STATUS "This is BINARY dir ${PROJECT_BINARY_DIR}")
message(STATUS "This is SOURCE dir ${PROJECT_SOURCE_DIR}")

add_subdirectory(src bin)
add_subdirectory(lib)
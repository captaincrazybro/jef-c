cmake_minimum_required(VERSION 3.19)
project(Jef C)

set(CMAKE_C_STANDARD 99)

add_library(Jef jef.c jef.h)

add_executable(JefTest test.c)
target_link_libraries(JefTest PUBLIC Jef)
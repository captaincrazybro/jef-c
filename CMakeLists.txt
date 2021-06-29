cmake_minimum_required(VERSION 3.19)
project(Jef C)

set(CMAKE_C_STANDARD 99)

add_subdirectory(log)
add_subdirectory(datatypes)
add_library(Jef jef.c jef.h)

include_directories(log)
include_directories(datatypes)
add_executable(JefTest test.c)
target_link_libraries(JefTest PUBLIC Jef)
target_link_libraries(JefTest PUBLIC Log)
target_link_libraries(JefTest PUBLIC Datatypes)
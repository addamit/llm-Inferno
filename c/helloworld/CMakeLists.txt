cmake_minimum_required(VERSION 3.10)
project(llm-inferno)

set(CMAKE_C_STANDARD 11)

add_executable(helloworld helloworld.c)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_compile_options(helloworld PRIVATE -g -O0)
    # Define multiple macros
    target_compile_definitions(helloworld PRIVATE VERBOSE_MODE)
elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
    target_compile_options(helloworld PRIVATE -O3)
endif()

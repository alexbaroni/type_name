cmake_minimum_required(VERSION 3.15)
project(type_name)

set(CMAKE_CXX_STANDARD 20)
add_compile_options("-Wall;-Wextra;-pedantic-errors;-Werror;-march=native")
add_compile_options("$<$<CONFIG:DEBUG>:-O0;-fno-inline;-g3;-fno-omit-frame-pointer;-fno-stack-protector;-mieee-fp>")
add_compile_options("$<$<CONFIG:RELEASE>:-O3;-g0;-DNDEBUG>")
add_compile_options("$<$<CONFIG:RELWITHDEBINFO>:-O2;-g;-DNDEBUG>")

set(TYPE_NAME_INCLUDE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${TYPE_NAME_INCLUDE_PATH})

add_executable(type_name type_name.cpp ${TYPE_NAME_INCLUDE_PATH}/type_name.hpp)

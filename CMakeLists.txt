cmake_minimum_required(VERSION 3.10)
project(test)
include_directories("./include")
set(SRC "./src/")
add_executable(
    ${PROJECT_NAME}
    ${SRC}main.cpp
)
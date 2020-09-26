cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(ecs CXX)

set(CMAKE_CXX_STANDARD 17)

add_library(ecs STATIC "")
target_include_directories(ecs PUBLIC "include")
target_sources(ecs PRIVATE src/registry.cpp)
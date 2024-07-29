cmake_minimum_required(VERSION 3.16)
project(
    Car
    VERSION 1.0
    DESCRIPTION "Car class"
    LANGUAGES CXX
)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_BUILD_TYPE Debug)

add_executable(car_class)

set(sources
    src/main.cpp
    src/car.h
    src/car.cpp
    src/lorry.h
    src/lorry.cpp
)

target_sources(car_class PRIVATE ${sources})

target_include_directories(car_class
PUBLIC
    "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>"
    "$<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>"
)
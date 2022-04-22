cmake_minimum_required(VERSION 3.22)
project(boosttest)

set(CMAKE_CXX_STANDARD 14)

add_executable(boosttest main.cpp)

find_package(Boost)
IF (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIR})
    target_link_libraries (boosttest ${Boost_LIBRARIES})
endif()
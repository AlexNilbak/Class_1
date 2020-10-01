cmake_minimum_required(VERSION 3.1)

project(Class)

include_directories(${PROJECT_SOURCE_DIR})

set (Class_SRC  CDist.cpp CPoint.cpp Test.cpp)
set (Class_HDR CDist.h CPoint.h)

add_executable (${PROJECT_NAME} ${Class_SRC} ${Class_HDR})
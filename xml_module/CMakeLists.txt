project(xml_module)
cmake_minimum_required(VERSION 3.3)
set(CMAKE_BUILD_TYPE Release)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
file(GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp ${CMAKE_CURRENT_SOURCE_DIR}/include/*.h)
add_library(xml_module SHARED ${SOURCES})
#target_include_directories (xml_module PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})




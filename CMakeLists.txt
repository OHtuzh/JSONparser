cmake_minimum_required(VERSION 3.23)
project(JSONparser)

set(CMAKE_CXX_STANDARD 23)

add_executable(JSONparser main.cpp)

add_subdirectory(lib)

target_link_libraries(JSONparser JsonParser)

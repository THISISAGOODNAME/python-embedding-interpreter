cmake_minimum_required(VERSION 3.10)
project(python_embedding_interpreter)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(3rd_party/pybind11)

add_executable(python_embedding_interpreter main.cpp)
target_link_libraries(python_embedding_interpreter  PRIVATE pybind11::embed)
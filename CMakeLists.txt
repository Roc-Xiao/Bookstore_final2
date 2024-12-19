cmake_minimum_required(VERSION 3.22.1)
project(mod)

set(CMAKE_CXX_STANDARD 17)

add_executable(mod main.cpp BookData.cpp assist.cpp Sale.cpp table.cpp)
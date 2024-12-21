cmake_minimum_required(VERSION 3.22.1)
project(mod)

set(CMAKE_CXX_STANDARD 17)

add_executable(mod main.cpp BookData.cpp BookData.h assist.cpp assist.h Sale.cpp Sale.h table.cpp table.h)
cmake_minimum_required(VERSION 3.20)
project(xml_parser)

set(CMAKE_CXX_STANDARD 11)
aux_source_directory(xml DIR_SRCS)
add_executable(xml_parser main.cpp ${DIR_SRCS})

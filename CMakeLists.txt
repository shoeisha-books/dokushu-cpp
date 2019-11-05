cmake_minimum_required(VERSION 3.5)

project(doku_cpp)

message(${CMAKE_SOURCE_DIR})

file(GLOB_RECURSE dirlist LIST_DIRECTORIES true ch*/list*)

foreach (filldir IN ITEMS ${dirlist})
    file(GLOB_RECURSE flist ${filldir}/*.cpp ${filldir}/*.hpp ${filldir}/*.c)
    message(${flist})
    string(REGEX REPLACE "^.*/" "" dir ${filldir})
    add_executable(${dir} ${flist})
	set_property(TARGET ${dir} PROPERTY CXX_STANDARD 17)
endforeach()
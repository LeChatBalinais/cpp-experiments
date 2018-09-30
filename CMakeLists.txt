cmake_minimum_required(VERSION 3.1)
project(Intro)

# Build the source in this folder
# Recurse in the mybin and mylib folder where you will create an executable and library
add_subdirectory(mybin)
add_subdirectory(mylib)
add_subdirectory(memorylib)

configure_file(${CMAKE_CURRENT_BINARY_DIR}/mylib/libmylib.dll ${CMAKE_CURRENT_BINARY_DIR}/mybin/libmylib.dll COPYONLY)
configure_file(${CMAKE_CURRENT_BINARY_DIR}/memorylib/libmemorylib.dll ${CMAKE_CURRENT_BINARY_DIR}/mybin/libmemorylib.dll COPYONLY)
add_executable(mybin
  mybin.cpp
)

target_link_libraries(mybin PRIVATE mylib)

target_link_libraries(mybin PRIVATE memorylib)
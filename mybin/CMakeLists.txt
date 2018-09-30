add_executable(mybin
  mybin.cpp
)

set_property(TARGET mybin PROPERTY CXX_STANDARD 17)

target_link_libraries(mybin PRIVATE mylib)

target_link_libraries(mybin PRIVATE memorylib)
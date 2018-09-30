add_library(memorylib SHARED
  include/memorylib/i_unique_ptr_tester.hh
  src/unique_ptr_tester.hh
  src/unique_ptr_tester.cc
  src/create_unique_ptr_tester.cc
)

set_property(TARGET memorylib PROPERTY CXX_STANDARD 17)

target_include_directories(memorylib
  PRIVATE src
  PUBLIC include
)

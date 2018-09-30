add_library(memorylib SHARED
  include/memorylib/i_unique_ptr_tester.hh
  src/unique_ptr_tester.hh
  src/unique_ptr_tester.cc
  src/create_unique_ptr_tester.cc
)

target_include_directories(memorylib
  PRIVATE src
  PUBLIC include
)

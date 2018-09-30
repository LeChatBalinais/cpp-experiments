add_library(mylib SHARED
  include/mylib/mylib.h
  src/mylib.cpp
  src/impl/mylib_impl.cpp
  src/impl/mylib_impl.h
)

set_property(TARGET mylib PROPERTY CXX_STANDARD 17)

target_include_directories(mylib
  PRIVATE src
  PUBLIC include
)

target_compile_definitions(mylib
  PRIVATE FASTPATH
)
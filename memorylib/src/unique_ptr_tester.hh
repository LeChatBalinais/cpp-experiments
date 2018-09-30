#pragma once

#include "memorylib/i_unique_ptr_tester.hh"
#include <iostream>

namespace mt
{

namespace impl
{

class UniquePtrTester : public mt::IUniquePtrTester
{
public:
  UniquePtrTester() {}
  ~UniquePtrTester() {}
  void test() override;
};

} // namespace impl
} // namespace mt
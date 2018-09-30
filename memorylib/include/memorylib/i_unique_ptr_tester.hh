#pragma once

namespace mt
{

class IUniquePtrTester
{
  public:
    virtual void test() = 0;
};

IUniquePtrTester *createUniquePtrTester();

} // namespace mt
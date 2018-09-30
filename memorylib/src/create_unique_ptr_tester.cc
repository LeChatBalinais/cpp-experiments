#include "memorylib/i_unique_ptr_tester.hh"
#include "unique_ptr_tester.hh"

namespace mt
{

IUniquePtrTester *createUniquePtrTester()
{
    return new impl::UniquePtrTester();
}

} // namespace mt

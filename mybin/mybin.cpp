#include "mylib/mylib.h"

#include "memorylib/i_unique_ptr_tester.hh"

#ifdef FASTPATH
#error Oops! You leaked the FASTPATH define to users from mylib
#endif

int main(int argc, char *argv[])
{
    hello();

    auto uniquePtrTester = mt::createUniquePtrTester();

    uniquePtrTester->test();

    return 0;
}
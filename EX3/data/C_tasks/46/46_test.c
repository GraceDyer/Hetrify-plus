#undef NDEBUG
#include <assert.h>
#include <stdio.h>

int fib4(int n);

int main()
{
    assert(fib4(5) == 4);
    assert(fib4(8) == 28);
    assert(fib4(10) == 104);
    assert(fib4(12) == 386);

    printf("All tests passed.");
    return 0;
}

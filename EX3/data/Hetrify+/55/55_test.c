#undef NDEBUG
#include <assert.h>
#include <stdio.h>

int fib(int n);

int main()
{
    assert(fib(10) == 55);
    assert(fib(1) == 1);
    assert(fib(8) == 21);
    assert(fib(11) == 89);
    assert(fib(12) == 144);
    printf("All tests passed.");
    return 0;
}

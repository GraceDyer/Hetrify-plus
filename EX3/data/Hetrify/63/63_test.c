#undef NDEBUG
#include <assert.h>
#include <stdio.h>

int fibfib(int n);

int main(void) {
    assert(fibfib(2) == 1);
    assert(fibfib(1) == 0);
    assert(fibfib(5) == 4);
    assert(fibfib(8) == 24);
    assert(fibfib(10) == 81);
    assert(fibfib(12) == 274);
    assert(fibfib(14) == 927);

    return 0;
}

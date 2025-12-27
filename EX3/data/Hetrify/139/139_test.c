#include <assert.h>
#include <stdio.h>

long long special_factorial(int n); // Assume this function is implemented elsewhere

int main(void)
{
    assert(special_factorial(4) == 288LL);
    assert(special_factorial(5) == 34560LL);
    assert(special_factorial(7) == 125411328000LL);
    assert(special_factorial(1) == 1LL);

    printf("All tests passed.");
    return 0;
}

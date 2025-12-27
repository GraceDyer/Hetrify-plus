#include <assert.h>
#include <stdio.h>

int largest_divisor(int n);

int main(void)
{
    assert(largest_divisor(3) == 1);
    assert(largest_divisor(7) == 1);
    assert(largest_divisor(10) == 5);
    assert(largest_divisor(100) == 50);
    assert(largest_divisor(49) == 7);

    printf("All tests passed.");
    return 0;
}

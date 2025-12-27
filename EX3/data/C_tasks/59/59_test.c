#undef NDEBUG
#include <assert.h>
#include <stdio.h>

int largest_prime_factor(int n);

int main()
{
    assert(largest_prime_factor(15) == 5);
    assert(largest_prime_factor(27) == 3);
    assert(largest_prime_factor(63) == 7);
    assert(largest_prime_factor(330) == 11);
    assert(largest_prime_factor(13195) == 29);

    printf("All tests passed.");
    return 0;
}

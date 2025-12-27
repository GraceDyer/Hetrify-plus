#undef NDEBUG
#include <assert.h>

/* Assume: int prime_length(char str[]); returns 1 if prime, 0 otherwise */

int prime_length(char str[]);

int main(void) {
    assert(prime_length("Hello") == 1);
    assert(prime_length("abcdcba") == 1);
    assert(prime_length("kittens") == 1);
    assert(prime_length("orange") == 0);
    assert(prime_length("wow") == 1);
    assert(prime_length("world") == 1);
    assert(prime_length("MadaM") == 1);
    assert(prime_length("Wow") == 1);
    assert(prime_length("") == 0);
    assert(prime_length("HI") == 1);
    assert(prime_length("go") == 1);
    assert(prime_length("gogo") == 0);
    assert(prime_length("aaaaaaaaaaaaaaa") == 0);
    assert(prime_length("Madam") == 1);
    assert(prime_length("M") == 0);
    assert(prime_length("0") == 0);
    return 0;
}

#undef NDEBUG
#include <assert.h>
#include <stdio.h>

/* Declare the function (but do not implement) */
extern int* even_odd_palindrome(int n);

/* Helper function to compare two int arrays of known lengths */
static int issame(const int *a, int len_a, const int *b, int len_b) {
    if (len_a != len_b) {
        return 0;
    }
    for (int i = 0; i < len_a; i++) {
        if (a[i] != b[i]) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    {
        int expected[] = {8, 13};
        int *result = even_odd_palindrome(123);
        assert(issame(result, 2, expected, 2));
    }
    {
        int expected[] = {4, 6};
        int *result = even_odd_palindrome(12);
        assert(issame(result, 2, expected, 2));
    }
    {
        int expected[] = {1, 2};
        int *result = even_odd_palindrome(3);
        assert(issame(result, 2, expected, 2));
    }
    {
        int expected[] = {6, 8};
        int *result = even_odd_palindrome(63);
        assert(issame(result, 2, expected, 2));
    }
    {
        int expected[] = {5, 6};
        int *result = even_odd_palindrome(25);
        assert(issame(result, 2, expected, 2));
    }
    {
        int expected[] = {4, 6};
        int *result = even_odd_palindrome(19);
        assert(issame(result, 2, expected, 2));
    }
    {
        int expected[] = {4, 5};
        int *result = even_odd_palindrome(9);
        assert(issame(result, 2, expected, 2));
    }
    {
        int expected[] = {0, 1};
        int *result = even_odd_palindrome(1);
        assert(issame(result, 2, expected, 2));
    }

    return 0;
}

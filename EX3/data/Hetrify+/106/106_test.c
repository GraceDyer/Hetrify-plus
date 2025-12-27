#undef NDEBUG
#include <assert.h>

/* Forward declaration of the function under test. */
int* f(int n);

/* Compare two arrays of length n for element-wise equality.
   Returns 1 if the same, 0 otherwise. */
static int issame(const int* a, const int* b, int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    {
        int* arr = f(5);
        int expected[5] = {1, 2, 6, 24, 15};
        assert(issame(arr, expected, 5));
    }
    {
        int* arr = f(7);
        int expected[7] = {1, 2, 6, 24, 15, 720, 28};
        assert(issame(arr, expected, 7));
    }
    {
        int* arr = f(1);
        int expected[1] = {1};
        assert(issame(arr, expected, 1));
    }
    {
        int* arr = f(3);
        int expected[3] = {1, 2, 6};
        assert(issame(arr, expected, 3));
    }
    return 0;
}

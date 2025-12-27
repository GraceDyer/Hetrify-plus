#undef NDEBUG
#include <assert.h>
#include <stdbool.h>

/* Assume function prototype:
   // lst is input array, n is its length.
   // output is an array of 2 ints, its values assigned by the function.
   void largest_smallest_integers(const int* lst, int n, int* output);
*/

void largest_smallest_integers(const int* lst, int lst_len, int* result);

bool issame(const int* a, int n, const int* b, int m) {
    if (n != m) return false;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    int input1[]  = {2, 4, 1, 3, 5, 7};
    int expect1[] = {0, 1};
    int output[2];
    largest_smallest_integers(input1, 6, output);
    assert(issame(output, 2, expect1, 2));

    int input2[]  = {2, 4, 1, 3, 5, 7, 0};
    int expect2[] = {0, 1};
    largest_smallest_integers(input2, 7, output);
    assert(issame(output, 2, expect2, 2));

    int input3[]  = {1, 3, 2, 4, 5, 6, -2};
    int expect3[] = {-2, 1};
    largest_smallest_integers(input3, 7, output);
    assert(issame(output, 2, expect3, 2));

    int input4[]  = {4, 5, 3, 6, 2, 7, -7};
    int expect4[] = {-7, 2};
    largest_smallest_integers(input4, 7, output);
    assert(issame(output, 2, expect4, 2));

    int input5[]  = {7, 3, 8, 4, 9, 2, 5, -9};
    int expect5[] = {-9, 2};
    largest_smallest_integers(input5, 8, output);
    assert(issame(output, 2, expect5, 2));

    int input6[] = {};
    int expect6[] = {0, 0};
    largest_smallest_integers(input6, 0, output);
    assert(issame(output, 2, expect6, 2));

    int input7[] = {0};
    int expect7[] = {0, 0};
    largest_smallest_integers(input7, 1, output);
    assert(issame(output, 2, expect7, 2));

    int input8[] = {-1, -3, -5, -6};
    int expect8[] = {-1, 0};
    largest_smallest_integers(input8, 4, output);
    assert(issame(output, 2, expect8, 2));

    int input9[] = {-1, -3, -5, -6, 0};
    int expect9[] = {-1, 0};
    largest_smallest_integers(input9, 5, output);
    assert(issame(output, 2, expect9, 2));

    int input10[] = {-6, -4, -4, -3, 1};
    int expect10[] = {-3, 1};
    largest_smallest_integers(input10, 5, output);
    assert(issame(output, 2, expect10, 2));

    int input11[] = {-6, -4, -4, -3, -100, 1};
    int expect11[] = {-3, 1};
    largest_smallest_integers(input11, 6, output);
    assert(issame(output, 2, expect11, 2));

    return 0;
}

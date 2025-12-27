#undef NDEBUG
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

/* Forward declaration; do not implement here */
int* sort_array(int* array, int array_size);

/* Compare two integer arrays of possibly different sizes. 
   Return 1 (true) if they are exactly the same, 0 (false) otherwise. */
static int issame(const int *a, int sizeA, const int *b, int sizeB) {
    if (sizeA != sizeB) {
        return 0;
    }
    for (int i = 0; i < sizeA; i++) {
        if (a[i] != b[i]) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    /* 1) Empty array => Empty array */
    {
        int arr_in[1] = {0};  /* Dummy buffer, passing size 0 below */
        int *arr_out = sort_array(arr_in, 0);
        int arr_expected[1] = {0};  /* Same dummy */
        assert(issame(arr_out, 0, arr_expected, 0));
    }

    /* 2) Single element => Same single element */
    {
        int arr_in[] = {5};
        int *arr_out = sort_array(arr_in, 1);
        int arr_expected[] = {5};
        assert(issame(arr_out, 1, arr_expected, 1));
    }

    /* 3) {2, 4, 3, 0, 1, 5} => {0, 1, 2, 3, 4, 5} */
    {
        int arr_in[] = {2, 4, 3, 0, 1, 5};
        int *arr_out = sort_array(arr_in, 6);
        int arr_expected[] = {0, 1, 2, 3, 4, 5};
        assert(issame(arr_out, 6, arr_expected, 6));
    }

    /* 4) {2, 4, 3, 0, 1, 5, 6} => {6, 5, 4, 3, 2, 1, 0} */
    {
        int arr_in[] = {2, 4, 3, 0, 1, 5, 6};
        int *arr_out = sort_array(arr_in, 7);
        int arr_expected[] = {6, 5, 4, 3, 2, 1, 0};
        assert(issame(arr_out, 7, arr_expected, 7));
    }

    /* 5) {2, 1} => {1, 2} */
    {
        int arr_in[] = {2, 1};
        int *arr_out = sort_array(arr_in, 2);
        int arr_expected[] = {1, 2};
        assert(issame(arr_out, 2, arr_expected, 2));
    }

    /* 6) {15, 42, 87, 32, 11, 0} => {0, 11, 15, 32, 42, 87} */
    {
        int arr_in[] = {15, 42, 87, 32, 11, 0};
        int *arr_out = sort_array(arr_in, 6);
        int arr_expected[] = {0, 11, 15, 32, 42, 87};
        assert(issame(arr_out, 6, arr_expected, 6));
    }

    /* 7) {21, 14, 23, 11} => {23, 21, 14, 11} */
    {
        int arr_in[] = {21, 14, 23, 11};
        int *arr_out = sort_array(arr_in, 4);
        int arr_expected[] = {23, 21, 14, 11};
        assert(issame(arr_out, 4, arr_expected, 4));
    }

    return 0;
}

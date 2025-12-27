#undef NDEBUG
#include <assert.h>
#include <limits.h>

int prod_signs(int* arr, int size);

int main() {
    int arr1[] = {1, 2, 2, -4};
    assert(prod_signs(arr1, 4) == -9);

    int arr2[] = {0, 1};
    assert(prod_signs(arr2, 2) == 0);

    int arr3[] = {1, 1, 1, 2, 3, -1, 1};
    assert(prod_signs(arr3, 7) == -10);

    int arr4[] = {};
    assert(prod_signs(arr4, 0) == -32768);

    int arr5[] = {2, 4, 1, 2, -1, -1, 9};
    assert(prod_signs(arr5, 7) == 20);

    int arr6[] = {-1, 1, -1, 1};
    assert(prod_signs(arr6, 4) == 4);

    int arr7[] = {-1, 1, 1, 1};
    assert(prod_signs(arr7, 4) == -4);

    int arr8[] = {-1, 1, 1, 0};
    assert(prod_signs(arr8, 4) == 0);

    return 0;
}

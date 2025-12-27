#include <assert.h>

int count_nums(int* n, int size); // Declaration of the count_nums function

int main() {
    int arr1[] = {}; // Empty array
    int arr2[] = {-1, -2, 0};
    int arr3[] = {1, 1, 2, -2, 3, 4, 5};
    int arr4[] = {1, 6, 9, -6, 0, 1, 5};
    int arr5[] = {1, 100, 98, -7, 1, -1};
    int arr6[] = {12, 23, 34, -45, -56, 0};
    int arr7[] = {0, 1}; // Note: -0 is equivalent to 0
    int arr8[] = {1};

    assert(count_nums(arr1, 0) == 0);
    assert(count_nums(arr2, 3) == 0);
    assert(count_nums(arr3, 7) == 6);
    assert(count_nums(arr4, 7) == 5);
    assert(count_nums(arr5, 6) == 4);
    assert(count_nums(arr6, 6) == 5);
    assert(count_nums(arr7, 2) == 1);
    assert(count_nums(arr8, 1) == 1);

    return 0;
}

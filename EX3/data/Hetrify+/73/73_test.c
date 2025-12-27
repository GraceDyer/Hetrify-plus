#include <assert.h>
#include <stdio.h>

int smallest_change(int *arr, int size); // Assume this function is implemented elsewhere

int main()
{
    int arr1[] = {1, 2, 3, 5, 4, 7, 9, 6};
    assert(smallest_change(arr1, sizeof(arr1) / sizeof(arr1[0])) == 4);

    int arr2[] = {1, 2, 3, 4, 3, 2, 2};
    assert(smallest_change(arr2, sizeof(arr2) / sizeof(arr2[0])) == 1);

    int arr3[] = {1, 4, 2};
    assert(smallest_change(arr3, sizeof(arr3) / sizeof(arr3[0])) == 1);

    int arr4[] = {1, 4, 4, 2};
    assert(smallest_change(arr4, sizeof(arr4) / sizeof(arr4[0])) == 1);

    int arr5[] = {1, 2, 3, 2, 1};
    assert(smallest_change(arr5, sizeof(arr5) / sizeof(arr5[0])) == 0);

    int arr6[] = {3, 1, 1, 3};
    assert(smallest_change(arr6, sizeof(arr6) / sizeof(arr6[0])) == 0);

    int arr7[] = {1};
    assert(smallest_change(arr7, sizeof(arr7) / sizeof(arr7[0])) == 0);

    int arr8[] = {0, 1};
    assert(smallest_change(arr8, sizeof(arr8) / sizeof(arr8[0])) == 1);

    printf("All tests passed.");
    return 0;
}

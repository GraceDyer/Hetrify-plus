#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

// Assume declaration of the function
bool pairs_sum_to_zero(int *l, int size);

int main(void) {
    int arr1[] = {1, 3, 5, 0};
    int arr2[] = {1, 3, -2, 1};
    int arr3[] = {1, 2, 3, 7};
    int arr4[] = {2, 4, -5, 3, 5, 7};
    int arr5[] = {1};
    int arr6[] = {-3, 9, -1, 3, 2, 30};
    int arr7[] = {-3, 9, -1, 3, 2, 31};
    int arr8[] = {-3, 9, -1, 4, 2, 30};
    int arr9[] = {-3, 9, -1, 4, 2, 31};

    assert(pairs_sum_to_zero(arr1, sizeof(arr1)/sizeof(arr1[0])) == false);
    assert(pairs_sum_to_zero(arr2, sizeof(arr2)/sizeof(arr2[0])) == false);
    assert(pairs_sum_to_zero(arr3, sizeof(arr3)/sizeof(arr3[0])) == false);
    assert(pairs_sum_to_zero(arr4, sizeof(arr4)/sizeof(arr4[0])) == true);
    assert(pairs_sum_to_zero(arr5, sizeof(arr5)/sizeof(arr5[0])) == false);
    assert(pairs_sum_to_zero(arr6, sizeof(arr6)/sizeof(arr6[0])) == true);
    assert(pairs_sum_to_zero(arr7, sizeof(arr7)/sizeof(arr7[0])) == true);
    assert(pairs_sum_to_zero(arr8, sizeof(arr8)/sizeof(arr8[0])) == false);
    assert(pairs_sum_to_zero(arr9, sizeof(arr9)/sizeof(arr9[0])) == false);

    return 0;
}

#undef NDEBUG
#include <assert.h>
#include <stdlib.h>

int add_elements(int* arr, int k);

int main() {
    int arr1[] = {1, -2, -3, 41, 57, 76, 87, 88, 99};
    int arr2[] = {111, 121, 3, 4000, 5, 6};
    int arr3[] = {11, 21, 3, 90, 5, 6, 7, 8, 9};
    int arr4[] = {111, 21, 3, 4000, 5, 6, 7, 8, 9};
    int arr5[] = {1};
    
    assert(add_elements(arr1, 3) == -4);
    assert(add_elements(arr2, 2) == 0);
    assert(add_elements(arr3, 4) == 125);
    assert(add_elements(arr4, 4) == 24);
    assert(add_elements(arr5, 1) == 1);

    return 0;
}

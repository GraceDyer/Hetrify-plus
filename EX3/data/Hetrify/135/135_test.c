#undef NDEBUG
#include <assert.h>

int can_arrange(int arr[], int arr_size);

int main() {
    int arr1[] = {1, 2, 4, 3, 5};
    assert(can_arrange(arr1, 5) == 3);

    int arr2[] = {1, 2, 4, 5};
    assert(can_arrange(arr2, 4) == -1);

    int arr3[] = {1, 4, 2, 5, 6, 7, 8, 9, 10};
    assert(can_arrange(arr3, 9) == 2);

    int arr4[] = {4, 8, 5, 7, 3};
    assert(can_arrange(arr4, 5) == 4);

    int arr5[] = {};
    assert(can_arrange(arr5, 0) == -1);

    return 0;
}

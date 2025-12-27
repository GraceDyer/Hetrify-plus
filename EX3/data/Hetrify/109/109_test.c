#undef NDEBUG
#include <assert.h>
#include <stdbool.h>

bool move_one_ball(int arr[], int n);

int main() {
    int arr1[] = {3, 4, 5, 1, 2};
    assert(move_one_ball(arr1, 5) == true);

    int arr2[] = {3, 5, 10, 1, 2};
    assert(move_one_ball(arr2, 5) == true);

    int arr3[] = {4, 3, 1, 2};
    assert(move_one_ball(arr3, 4) == false);

    int arr4[] = {3, 5, 4, 1, 2};
    assert(move_one_ball(arr4, 5) == false);

    int arr5[] = {};
    assert(move_one_ball(arr5, 0) == true);

    return 0;
}

#undef NDEBUG
#include <assert.h>
#include <stdbool.h>

int below_threshold(int *l, int size, int t);

int main() {
    int arr1[] = {1, 2, 4, 10};
    int arr2[] = {1, 20, 4, 10};
    int arr3[] = {1, 8, 4, 10};

    assert(below_threshold(arr1, 4, 100));
    assert(!below_threshold(arr2, 4, 5));
    assert(below_threshold(arr2, 4, 21));
    assert(below_threshold(arr2, 4, 22));
    assert(below_threshold(arr3, 4, 11));
    assert(!below_threshold(arr3, 4, 10));

    return 0;
}

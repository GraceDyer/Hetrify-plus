#undef NDEBUG
#include <assert.h>
#include <stdbool.h>  // Required for the 'bool' type

bool triples_sum_to_zero(int* l, int l_size);

int main() {
    int arr1[] = {1, 3, 5, 0};
    int arr2[] = {1, 3, 5, -1};
    int arr3[] = {1, 3, -2, 1};
    int arr4[] = {1, 2, 3, 7};
    int arr5[] = {1, 2, 5, 7};
    int arr6[] = {2, 4, -5, 3, 9, 7};
    int arr7[] = {1};
    int arr8[] = {1, 3, 5, -100};
    int arr9[] = {100, 3, 5, -100};

    assert(triples_sum_to_zero(arr1, 4) == false);
    assert(triples_sum_to_zero(arr2, 4) == false);
    assert(triples_sum_to_zero(arr3, 4) == true);
    assert(triples_sum_to_zero(arr4, 4) == false);
    assert(triples_sum_to_zero(arr5, 4) == false);
    assert(triples_sum_to_zero(arr6, 6) == true);
    assert(triples_sum_to_zero(arr7, 1) == false);
    assert(triples_sum_to_zero(arr8, 4) == false);
    assert(triples_sum_to_zero(arr9, 4) == false);

    return 0;
}

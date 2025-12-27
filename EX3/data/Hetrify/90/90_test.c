#undef NDEBUG
#include <assert.h>

int next_smallest(int* lst, int size);

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    assert(next_smallest(arr1, 5) == 2);
    
    int arr2[] = {5, 1, 4, 3, 2};
    assert(next_smallest(arr2, 5) == 2);
    
    assert(next_smallest(0, 0) == -1);
    
    int arr3[] = {1, 1};
    assert(next_smallest(arr3, 2) == -1);
    
    int arr4[] = {1, 1, 1, 1, 0};
    assert(next_smallest(arr4, 5) == 1);
    
    int arr5[] = {-35, 34, 12, -45};
    assert(next_smallest(arr5, 4) == -35);
    
    return 0;
}

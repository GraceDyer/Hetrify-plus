#undef NDEBUG
#include <assert.h>
#include <stdbool.h>

bool will_it_fly(int* q, int size, int w);

int main(){
    int arr1[] = {3, 2, 3};
    assert(will_it_fly(arr1, 3, 9) == true);
    
    int arr2[] = {1, 2};
    assert(will_it_fly(arr2, 2, 5) == false);
    
    int arr3[] = {3};
    assert(will_it_fly(arr3, 1, 5) == true);
    
    int arr4[] = {3, 2, 3};
    assert(will_it_fly(arr4, 3, 1) == false);
    
    int arr5[] = {1, 2, 3};
    assert(will_it_fly(arr5, 3, 6) == false);
    
    int arr6[] = {5};
    assert(will_it_fly(arr6, 1, 5) == true);
    
    return 0;
}

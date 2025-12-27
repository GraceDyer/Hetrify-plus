#undef NDEBUG
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
#include<assert.h>

bool is_sorted(int* lst, int size);

int main() {
    {
        int arr[] = {5};
        assert(is_sorted(arr, sizeof(arr) / sizeof(int)) == true);
    }
    {
        int arr[] = {1, 2, 3, 4, 5};
        assert(is_sorted(arr, sizeof(arr) / sizeof(int)) == true);
    }
    {
        int arr[] = {1, 3, 2, 4, 5};
        assert(is_sorted(arr, sizeof(arr) / sizeof(int)) == false);
    }
    {
        int arr[] = {1, 2, 3, 4, 5, 6};
        assert(is_sorted(arr, sizeof(arr) / sizeof(int)) == true);
    }
    {
        int arr[] = {1, 2, 3, 4, 5, 6, 7};
        assert(is_sorted(arr, sizeof(arr) / sizeof(int)) == true);
    }
    {
        int arr[] = {1, 3, 2, 4, 5, 6, 7};
        assert(is_sorted(arr, sizeof(arr) / sizeof(int)) == false);
    }
    {
        int arr[] = {};
        assert(is_sorted(arr, sizeof(arr) / sizeof(int)) == true);
    }
    {
        int arr[] = {1};
        assert(is_sorted(arr, sizeof(arr) / sizeof(int)) == true);
    }
    {
        int arr[] = {3, 2, 1};
        assert(is_sorted(arr, sizeof(arr) / sizeof(int)) == false);
    }
    {
        int arr[] = {1, 2, 2, 2, 3, 4};
        assert(is_sorted(arr, sizeof(arr) / sizeof(int)) == false);
    }
    {
        int arr[] = {1, 2, 3, 3, 3, 4};
        assert(is_sorted(arr, sizeof(arr) / sizeof(int)) == false);
    }
    {
        int arr[] = {1, 2, 2, 3, 3, 4};
        assert(is_sorted(arr, sizeof(arr) / sizeof(int)) == true);
    }
    {
        int arr[] = {1, 2, 3, 4};
        assert(is_sorted(arr, sizeof(arr) / sizeof(int)) == true);
    }
    return 0;
}

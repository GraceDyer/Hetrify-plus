#undef NDEBUG
#include <assert.h>
#include <stdio.h>

/*
 * Forward declaration of the function to be tested.
 * We do NOT implement it here as requested.
 * Assume it returns a pointer to an array of 2 ints: {sum, product}.
 */
int *sum_product(int *numbers, int size);

int main(void)
{
    int *res;

    /* Test 1: Empty array -> sum = 0, product = 1 */
    res = sum_product(NULL, 0);
    assert(res[0] == 0);
    assert(res[1] == 1);

    /* Test 2: {1, 1, 1} -> sum = 3, product = 1 */
    {
        int arr[] = {1, 1, 1};
        res = sum_product(arr, 3);
        assert(res[0] == 3);
        assert(res[1] == 1);
    }

    /* Test 3: {100, 0} -> sum = 100, product = 0 */
    {
        int arr[] = {100, 0};
        res = sum_product(arr, 2);
        assert(res[0] == 100);
        assert(res[1] == 0);
    }

    /* Test 4: {3, 5, 7} -> sum = 15, product = 105 */
    {
        int arr[] = {3, 5, 7};
        res = sum_product(arr, 3);
        assert(res[0] == 15);
        assert(res[1] == 105);
    }

    /* Test 5: {10} -> sum = 10, product = 10 */
    {
        int arr[] = {10};
        res = sum_product(arr, 1);
        assert(res[0] == 10);
        assert(res[1] == 10);
    }

    printf("All tests passed.");
    return 0;
}

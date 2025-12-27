#undef NDEBUG
#include <assert.h>
#include <stdio.h>

extern long long minSubArraySum(long long* nums, int nums_size);

int main() {
    long long test1[] = {2, 3, 4, 1, 2, 4};
    assert(minSubArraySum(test1, 6) == 1);

    long long test2[] = {-1, -2, -3};
    assert(minSubArraySum(test2, 3) == -6);
    
    long long test3[] = {-1, -2, -3, 2, -10};
    assert(minSubArraySum(test3, 5) == -14);
    
    long long test4[] = {-9999999999999999LL};
    assert(minSubArraySum(test4, 1) == -9999999999999999LL);
    
    long long test5[] = {0, 10, 20, 1000000};
    assert(minSubArraySum(test5, 4) == 0);
    
    long long test6[] = {-1, -2, -3, 10, -5};
    assert(minSubArraySum(test6, 5) == -6);
    
    long long test7[] = {100, -1, -2, -3, 10, -5};
    assert(minSubArraySum(test7, 6) == -6);
    
    long long test8[] = {10, 11, 13, 8, 3, 4};
    assert(minSubArraySum(test8, 6) == 3);
    
    long long test9[] = {100, -33, 32, -1, 0, -2};
    assert(minSubArraySum(test9, 6) == -33);
    
    long long test10[] = {-10};
    assert(minSubArraySum(test10, 1) == -10);
    
    long long test11[] = {7};
    assert(minSubArraySum(test11, 1) == 7);
    
    long long test12[] = {1, -1};
    assert(minSubArraySum(test12, 2) == -1);
    
    return 0;
}

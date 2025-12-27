#undef NDEBUG
#include <assert.h>

int specialFilter(int nums[], int numsSize);

int main() {
    int a1[] = {5, -2, 1, -5};
    assert(specialFilter(a1, 4) == 0);

    int a2[] = {15, -73, 14, -15};
    assert(specialFilter(a2, 4) == 1);

    int a3[] = {33, -2, -3, 45, 21, 109};
    assert(specialFilter(a3, 6) == 2);

    int a4[] = {43, -12, 93, 125, 121, 109};
    assert(specialFilter(a4, 6) == 4);

    int a5[] = {71, -2, -33, 75, 21, 19};
    assert(specialFilter(a5, 6) == 3);

    int a6[] = {1};
    assert(specialFilter(a6, 1) == 0);

    int a7[] = {};
    assert(specialFilter(a7, 0) == 0);

    return 0;
}

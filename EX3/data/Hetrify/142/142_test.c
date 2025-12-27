#include <assert.h>

int sum_squares(int* lst, int size);

int main() {
    int test1[] = {1, 2, 3};
    assert(sum_squares(test1, 3) == 6);

    int test2[] = {1, 4, 9};
    assert(sum_squares(test2, 3) == 14);

    int test3[] = {};
    assert(sum_squares(test3, 0) == 0);

    int test4[] = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    assert(sum_squares(test4, 9) == 9);

    int test5[] = {-1, -1, -1, -1, -1, -1, -1, -1, -1};
    assert(sum_squares(test5, 9) == -3);

    int test6[] = {0};
    assert(sum_squares(test6, 1) == 0);

    int test7[] = {-1, -5, 2, -1, -5};
    assert(sum_squares(test7, 5) == -126);

    int test8[] = {-56, -99, 1, 0, -2};
    assert(sum_squares(test8, 5) == 3030);

    int test9[] = {-1, 0, 0, 0, 0, 0, 0, 0, -1};
    assert(sum_squares(test9, 9) == 0);

    int test10[] = {-16, -9, -2, 36, 36, 26, -20, 25, -40, 20, -4, 12, -26, 35, 37};
    assert(sum_squares(test10, 15) == -14196);

    int test11[] = {-1, -3, 17, -1, -15, 13, -1, 14, -14, -12, -5, 14, -14, 6, 13, 11, 16, 16, 4, 10};
    assert(sum_squares(test11, 20) == -1448);

    return 0;
}

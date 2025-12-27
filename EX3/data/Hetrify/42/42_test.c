#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool issame(int* a, int a_length, int* b, int b_length) {
    if (a_length != b_length) {
        return false;
    }
    for (int i = 0; i < a_length; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int* incr_list(int* l, int length);

int main() {
    int test1[] = {};
    int expected1[] = {};
    assert(issame(incr_list(test1, 0), 0, expected1, 0));

    int test2[] = {3, 2, 1};
    int expected2[] = {4, 3, 2};
    assert(issame(incr_list(test2, 3), 3, expected2, 3));

    int test3[] = {5, 2, 5, 2, 3, 3, 9, 0, 123};
    int expected3[] = {6, 3, 6, 3, 4, 4, 10, 1, 124};
    assert(issame(incr_list(test3, 9), 9, expected3, 9));

    return 0;
}

#undef NDEBUG
#include <assert.h>
#include <stdbool.h>

int common(const int* l1, int len1, const int* l2, int len2, int* out);

/* Helper: compare two arrays of equal 'len', returns true if identical */
bool issame(const int *a, int alen, const int *b, int blen) {
    if (alen != blen) return false;
    for (int i = 0; i < alen; i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

/* Assume:
 * int common(const int *l1, int n1, const int *l2, int n2, int *out);
 * Returns number of items written to *out.
 */

int main() {
    /* 1st test */
    int a1[] = {1, 4, 3, 34, 653, 2, 5};
    int b1[] = {5, 7, 1, 5, 9, 653, 121};
    int out1[10];
    int expected1[] = {1, 5, 653};
    int nout1 = common(a1, 7, b1, 7, out1);
    assert(issame(out1, nout1, expected1, 3));

    /* 2nd test */
    int a2[] = {5, 3, 2, 8};
    int b2[] = {3, 2};
    int out2[10];
    int expected2[] = {2, 3};
    int nout2 = common(a2, 4, b2, 2, out2);
    assert(issame(out2, nout2, expected2, 2));

    /* 3rd test */
    int a3[] = {4, 3, 2, 8};
    int b3[] = {3, 2, 4};
    int out3[10];
    int expected3[] = {2, 3, 4};
    int nout3 = common(a3, 4, b3, 3, out3);
    assert(issame(out3, nout3, expected3, 3));

    /* 4th test: one empty list */
    int a4[] = {4, 3, 2, 8};
    int b4[] = {};
    int out4[10];
    int expected4[] = {};
    int nout4 = common(a4, 4, b4, 0, out4);
    assert(issame(out4, nout4, expected4, 0));

    return 0;
}

#undef NDEBUG
#include <assert.h>
#include <stdbool.h>

// Compare two arrays of length n
bool issame(const int *a, const int *b, int n) {
    for (int i = 0; i < n; i++)
        if (a[i] != b[i]) return false;
    return true;
}

void order_by_points(const int *nums, int len, int *result);

int main(void) {
    int nums1[] = {1, 11, -1, -11, -12};
    int want1[] = {-1, -11, 1, -12, 11};
    int out1[5];
    order_by_points(nums1, 5, out1);
    assert(issame(out1, want1, 5));

    int nums2[] = {1234,423,463,145,2,423,423,53,6,37,3457,3,56,0,46};
    int want2[] = {0, 2, 3, 6, 53, 423, 423, 423, 1234, 145, 37, 46, 56, 463, 3457};
    int out2[15];
    order_by_points(nums2, 15, out2);
    assert(issame(out2, want2, 15));

    int nums3[] = {};
    int want3[] = {};
    int out3[1];
    order_by_points(nums3, 0, out3);
    assert(issame(out3, want3, 0));

    int nums4[] = {1, -11, -32, 43, 54, -98, 2, -3};
    int want4[] = {-3, -32, -98, -11, 1, 2, 43, 54};
    int out4[8];
    order_by_points(nums4, 8, out4);
    assert(issame(out4, want4, 8));

    int nums5[] = {1,2,3,4,5,6,7,8,9,10,11};
    int want5[] = {1, 10, 2, 11, 3, 4, 5, 6, 7, 8, 9};
    int out5[11];
    order_by_points(nums5, 11, out5);
    assert(issame(out5, want5, 11));

    int nums6[] = {0,6,6,-76,-21,23,4};
    int want6[] = {-76, -21, 0, 4, 23, 6, 6};
    int out6[7];
    order_by_points(nums6, 7, out6);
    assert(issame(out6, want6, 7));

    return 0;
}

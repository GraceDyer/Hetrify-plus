#include <assert.h>

int skjkasdkd(int* lst, unsigned int size);

int main() {
    int arr1[] = {0, 3, 2, 1, 3, 5, 7, 4, 5, 5, 5, 2, 181, 32, 4, 32, 3, 2, 32, 324, 4, 3};
    unsigned int size1 = sizeof(arr1) / sizeof(arr1[0]);
    assert(skjkasdkd(arr1, size1) == 10);

    int arr2[] = {1, 0, 1, 8, 2, 4597, 2, 1, 3, 40, 1, 2, 1, 2, 4, 2, 5, 1};
    unsigned int size2 = sizeof(arr2) / sizeof(arr2[0]);
    assert(skjkasdkd(arr2, size2) == 25);

    int arr3[] = {1, 3, 1, 32, 5107, 34, 83278, 109, 163, 23, 2323, 32, 30, 1, 9, 3};
    unsigned int size3 = sizeof(arr3) / sizeof(arr3[0]);
    assert(skjkasdkd(arr3, size3) == 13);

    int arr4[] = {0, 724, 32, 71, 99, 32, 6, 0, 5, 91, 83, 0, 5, 6};
    unsigned int size4 = sizeof(arr4) / sizeof(arr4[0]);
    assert(skjkasdkd(arr4, size4) == 11);

    int arr5[] = {0, 81, 12, 3, 1, 21};
    unsigned int size5 = sizeof(arr5) / sizeof(arr5[0]);
    assert(skjkasdkd(arr5, size5) == 3);

    int arr6[] = {0, 8, 1, 2, 1, 7};
    unsigned int size6 = sizeof(arr6) / sizeof(arr6[0]);
    assert(skjkasdkd(arr6, size6) == 7);

    int arr7[] = {8191};
    unsigned int size7 = sizeof(arr7) / sizeof(arr7[0]);
    assert(skjkasdkd(arr7, size7) == 19);

    int arr8[] = {8191, 123456, 127, 7};
    unsigned int size8 = sizeof(arr8) / sizeof(arr8[0]);
    assert(skjkasdkd(arr8, size8) == 19);

    int arr9[] = {127, 97, 8192};
    unsigned int size9 = sizeof(arr9) / sizeof(arr9[0]);
    assert(skjkasdkd(arr9, size9) == 10);

    return 0;
}

#undef NDEBUG
#include <assert.h>

int add(int* lst, int size);

int main() {
    int test1[] = {4, 88};
    assert(add(test1, sizeof(test1) / sizeof(test1[0])) == 88);
    
    int test2[] = {4, 5, 6, 7, 2, 122};
    assert(add(test2, sizeof(test2) / sizeof(test2[0])) == 122);
    
    int test3[] = {4, 0, 6, 7};
    assert(add(test3, sizeof(test3) / sizeof(test3[0])) == 0);
    
    int test4[] = {4, 4, 6, 8};
    assert(add(test4, sizeof(test4) / sizeof(test4[0])) == 12);
    
    return 0;
}

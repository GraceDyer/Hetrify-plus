#undef NDEBUG
#include <assert.h>

int solutions(int* lst, int lst_size);

int main() {
    int lst1[] = {5, 8, 7, 1};
    int lst2[] = {3, 3, 3, 3, 3};
    int lst3[] = {30, 13, 24, 321};
    int lst4[] = {5, 9};
    int lst5[] = {2, 4, 8};
    int lst6[] = {30, 13, 23, 32};
    int lst7[] = {3, 13, 2, 9};

    assert(solutions(lst1, sizeof(lst1) / sizeof(lst1[0])) == 12);
    assert(solutions(lst2, sizeof(lst2) / sizeof(lst2[0])) == 9);
    assert(solutions(lst3, sizeof(lst3) / sizeof(lst3[0])) == 0);
    assert(solutions(lst4, sizeof(lst4) / sizeof(lst4[0])) == 5);
    assert(solutions(lst5, sizeof(lst5) / sizeof(lst5[0])) == 0);
    assert(solutions(lst6, sizeof(lst6) / sizeof(lst6[0])) == 23);
    assert(solutions(lst7, sizeof(lst7) / sizeof(lst7[0])) == 3);
    
    return 0;
}

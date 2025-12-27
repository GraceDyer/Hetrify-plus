#include <stdbool.h>
#include <assert.h>

bool below_zero(int *operations, int size);

int main(){
    int ops1[] = {};
    int ops2[] = {1, 2, -3, 1, 2, -3};
    int ops3[] = {1, 2, -4, 5, 6};
    int ops4[] = {1, -1, 2, -2, 5, -5, 4, -4};
    int ops5[] = {1, -1, 2, -2, 5, -5, 4, -5};
    int ops6[] = {1, -2, 2, -2, 5, -5, 4, -4};

    assert(below_zero(ops1, 0) == false);
    assert(below_zero(ops2, sizeof(ops2)/sizeof(ops2[0])) == false);
    assert(below_zero(ops3, sizeof(ops3)/sizeof(ops3[0])) == true);
    assert(below_zero(ops4, sizeof(ops4)/sizeof(ops4[0])) == false);
    assert(below_zero(ops5, sizeof(ops5)/sizeof(ops5[0])) == true);
    assert(below_zero(ops6, sizeof(ops6)/sizeof(ops6[0])) == true);

    return 0;
}

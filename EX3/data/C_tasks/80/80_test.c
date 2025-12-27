#undef NDEBUG
#include <assert.h>
#include <stdio.h>

int is_happy(char s[]);  // Assume external implementation

int main(void) {
    assert(is_happy("a") == 0);
    assert(is_happy("aa") == 0);
    assert(is_happy("abcd") == 1);
    assert(is_happy("aabb") == 0);
    assert(is_happy("adb") == 1);
    assert(is_happy("xyy") == 0);
    assert(is_happy("iopaxpoi") == 1);
    assert(is_happy("iopaxioi") == 0);
    return 0;
}

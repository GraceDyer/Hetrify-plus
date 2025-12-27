#undef NDEBUG
#include <assert.h>
#include <stdio.h>
#include <string.h>

/* Forward declaration (implementation elsewhere) */
char* change_base(int x, int base);

/* Utility to convert an integer to a string for comparison */
static char* int_to_string(int val) {
    /* 
       Using a static buffer for simplicity. 
       This will be overwritten on each call.
    */
    static char buffer[64];
    sprintf(buffer, "%d", val);
    return buffer;
}

int main(void) {
    /* Direct string comparison must use strcmp() instead of '==' */
    assert(strcmp(change_base(8, 3), "22") == 0);
    assert(strcmp(change_base(9, 3), "100") == 0);
    assert(strcmp(change_base(234, 2), "11101010") == 0);
    assert(strcmp(change_base(16, 2), "10000") == 0);
    assert(strcmp(change_base(8, 2), "1000") == 0);
    assert(strcmp(change_base(7, 2), "111") == 0);

    /* Verify that change_base(x, x+1) equals the string representation of x */
    for (int x = 2; x < 8; x++) {
        assert(strcmp(change_base(x, x + 1), int_to_string(x)) == 0);
    }
    return 0;
}

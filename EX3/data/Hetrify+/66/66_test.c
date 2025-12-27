/* 
 * File: main.c
 * 
 * Compile this test with a separate implementation of 
 * the function int digitSum(const char* s); 
 * which you must provide in another source file.
 *
 * Only uses assert() from <assert.h> (no C++ features).
 * Uses C99 standard. 
 */

#undef NDEBUG
#include <assert.h>

int digitSum(const char* s);

int main(void) {
    assert(digitSum("") == 0);
    assert(digitSum("abAB") == 131);
    assert(digitSum("abcCd") == 67);
    assert(digitSum("helloE") == 69);
    assert(digitSum("woArBld") == 131);
    assert(digitSum("aAaaaXa") == 153);
    assert(digitSum(" How are yOu?") == 151);
    assert(digitSum("You arE Very Smart") == 327);

    return 0;
}

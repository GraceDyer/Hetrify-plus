#undef NDEBUG
#include <assert.h>

/* Assume: int same_chars(char* s0, char* s1); */

int same_chars(char* s0, char* s1);

int main(void) {
    assert(same_chars("eabcdzzzz", "dddzzzzzzzddeddabc") == 1);
    assert(same_chars("abcd", "dddddddabc") == 1);
    assert(same_chars("dddddddabc", "abcd") == 1);
    assert(same_chars("eabcd", "dddddddabc") == 0);
    assert(same_chars("abcd", "dddddddabcf") == 0);
    assert(same_chars("eabcdzzzz", "dddzzzzzzzddddabc") == 0);
    assert(same_chars("aabb", "aaccc") == 0);
    return 0;
}

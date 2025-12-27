#undef NDEBUG
#include <assert.h>
#include <stdbool.h>

bool cycpattern_check(char *a, char *b);

int main()
{
    assert(cycpattern_check("xyzw", "xyw") == false);
    assert(cycpattern_check("yello", "ell") == true);
    assert(cycpattern_check("whattup", "ptut") == false);
    assert(cycpattern_check("efef", "fee") == true);
    assert(cycpattern_check("abab", "aabb") == false);
    assert(cycpattern_check("winemtt", "tinem") == true);
    return 0;
}

#undef NDEBUG
#include <assert.h>

/* Forward declaration of the function (not implemented here) */
int is_nested(char* str);

int main(void)
{
    assert(is_nested("[[]]") == 1);
    assert(is_nested("[]]]]]]][[[[[]") == 0);
    assert(is_nested("[][]") == 0);
    /* Extra parentheses around "[]" do not affect the string itself */
    assert(is_nested(("[]")) == 0);
    assert(is_nested("[[[[]]]]") == 1);
    assert(is_nested("[]]]]]]]]]]") == 0);
    assert(is_nested("[][][[]]") == 1);
    assert(is_nested("[[]") == 0);
    assert(is_nested("[]]") == 0);
    assert(is_nested("[[]][[") == 1);
    assert(is_nested("[[][]]") == 1);
    assert(is_nested("") == 0);
    assert(is_nested("[[[[[[[[") == 0);
    assert(is_nested("]]]]]]]]") == 0);

    return 0;
}

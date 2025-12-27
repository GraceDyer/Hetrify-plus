#undef NDEBUG
#include <assert.h>

/* Declaration of the function, if needed */
// int correct_bracketing(char brackets[]);

int correct_bracketing(char brackets[]);

int main() {
    assert(correct_bracketing("()"));
    assert(correct_bracketing("(()())"));
    assert(correct_bracketing("()()(()())()"));
    assert(correct_bracketing("()()((()()())())(()()(()))"));
    assert(!correct_bracketing("((()())))"));
    assert(!correct_bracketing(")(()"));
    assert(!correct_bracketing("("));
    assert(!correct_bracketing("(((("));
    assert(!correct_bracketing(")"));
    assert(!correct_bracketing("(()"));
    assert(!correct_bracketing("()()(()())())(()"));
    assert(!correct_bracketing("()()(()())()))()"));
    return 0;
}

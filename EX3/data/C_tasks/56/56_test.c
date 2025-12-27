#undef NDEBUG
#include <assert.h>
#include <stdbool.h>

int correct_bracketing(const char* brackets);

int main() {
    assert(correct_bracketing("<>"));
    assert(correct_bracketing("<<><>>"));
    assert(correct_bracketing("<><><<><>><>"));
    assert(correct_bracketing("<><><<<><><>><>><<><><<>>>"));
    assert(!correct_bracketing("<<<><>>>>"));
    assert(!correct_bracketing("><<>"));
    assert(!correct_bracketing("<"));
    assert(!correct_bracketing("<<<<"));
    assert(!correct_bracketing(">"));
    assert(!correct_bracketing("<<>"));
    assert(!correct_bracketing("<><><<><>><>><<>"));
    assert(!correct_bracketing("<><><<><>><>>><>"));
    
    return 0;
}

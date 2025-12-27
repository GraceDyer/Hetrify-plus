#undef NDEBUG
#include <assert.h>
int strlen(const char* str);

int main() {
    assert(strlen("") == 0);
    assert(strlen("x") == 1);
    assert(strlen("asdasnakj") == 9);
    return 0;
}

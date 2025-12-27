#undef NDEBUG
#include <assert.h>
#include <stdio.h>
// int how_many_times(char *str, char *substring); // Function prototype
extern int string_length(void *);
int main()
{
    assert(how_many_times("", "x") == 0);
    assert(how_many_times("xyxyxyx", "x") == 4);
    assert(how_many_times("cacacacac", "cac") == 4);
    assert(how_many_times("john doe", "john") == 1);

    return 0; // Return statement added for completeness
}

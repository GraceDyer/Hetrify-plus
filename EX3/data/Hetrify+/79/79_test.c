#undef NDEBUG
#include <assert.h>
#include <string.h>

/* prototype for the function under test */
char* decimal_to_binary(int decimal);

int main(void) {
    assert(strcmp(decimal_to_binary(0),   "db0db")       == 0);
    assert(strcmp(decimal_to_binary(32),  "db100000db")  == 0);
    assert(strcmp(decimal_to_binary(103), "db1100111db") == 0);
    assert(strcmp(decimal_to_binary(15),  "db1111db")    == 0);
    return 0;
}

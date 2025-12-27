#undef NDEBUG
#include <assert.h>
#include <stdio.h>

/* Declare the function with C99-compatible `int` return type */
int check_if_last_char_is_a_letter(char *txt);

int main(void) {
    assert(check_if_last_char_is_a_letter("apple") == 0);
    assert(check_if_last_char_is_a_letter("apple pi e") == 1);
    assert(check_if_last_char_is_a_letter("eeeee") == 0);
    assert(check_if_last_char_is_a_letter("A") == 1);
    assert(check_if_last_char_is_a_letter("Pumpkin pie ") == 0);
    assert(check_if_last_char_is_a_letter("Pumpkin pie 1") == 0);
    assert(check_if_last_char_is_a_letter("") == 0);
    assert(check_if_last_char_is_a_letter("eeeee e ") == 0);
    assert(check_if_last_char_is_a_letter("apple pie") == 0);
    assert(check_if_last_char_is_a_letter("apple pi e ") == 0);
    return 0;
}

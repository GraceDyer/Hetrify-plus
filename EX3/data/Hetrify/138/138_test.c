#undef NDEBUG
#include <assert.h>
#include <stdbool.h>

// Assume the function is defined here
// #include <stdbool.h>
// bool is_equal_to_sum_even(int n);
bool is_equal_to_sum_even(int n);

int main() {
    assert(is_equal_to_sum_even(4) == false);
    assert(is_equal_to_sum_even(6) == false);
    assert(is_equal_to_sum_even(8) == true);
    assert(is_equal_to_sum_even(10) == true);
    assert(is_equal_to_sum_even(11) == false);
    assert(is_equal_to_sum_even(12) == true);
    assert(is_equal_to_sum_even(13) == false);
    assert(is_equal_to_sum_even(16) == true);

    return 0;
}

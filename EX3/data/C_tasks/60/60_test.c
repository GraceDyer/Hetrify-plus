#include <assert.h>

int sum_to_n(int n);

int main() {
    assert(sum_to_n(1) == 1);
    assert(sum_to_n(6) == 21);
    assert(sum_to_n(11) == 66);
    assert(sum_to_n(30) == 465);
    assert(sum_to_n(100) == 5050);

    return 0; // Return 0 to indicate successful execution
}

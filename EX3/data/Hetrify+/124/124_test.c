#undef NDEBUG
#include <assert.h>
#include <stdbool.h>

int valid_date(char* date);

int main() {
    assert(valid_date("03-11-2000") == 1); // true
    assert(valid_date("15-01-2012") == 0); // false
    assert(valid_date("04-0-2040") == 0);  // false
    assert(valid_date("06-04-2020") == 1); // true
    assert(valid_date("01-01-2007") == 1); // true
    assert(valid_date("03-32-2011") == 0); // false
    assert(valid_date("") == 0);           // false
    assert(valid_date("04-31-3000") == 0); // false
    assert(valid_date("06-06-2005") == 1); // true
    assert(valid_date("21-31-2000") == 0); // false
    assert(valid_date("04-12-2003") == 1); // true
    assert(valid_date("04122003") == 0);   // false
    assert(valid_date("20030412") == 0);   // false
    assert(valid_date("2003-04") == 0);    // false
    assert(valid_date("2003-04-12") == 0); // false
    assert(valid_date("04-2003") == 0);    // false

    return 0;
}

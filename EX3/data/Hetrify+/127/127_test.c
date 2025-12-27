#undef NDEBUG
#include <assert.h>
#include <string.h>

/* prototype of the function under test */
extern int intersection(int *interval1, int interval1_size,
                        int *interval2, int interval2_size);

int main(void)
{
    int i1a[] = {1, 2}, i2a[] = {2, 3};
    assert(intersection(i1a, 2, i2a, 2) == 0);

    int i1b[] = {-1, 1}, i2b[] = {0, 4};
    assert(intersection(i1b, 2, i2b, 2) == 0);

    int i1c[] = {-3, -1}, i2c[] = {-5, 5};
    assert(intersection(i1c, 2, i2c, 2) == 1);

    int i1d[] = {-2, 2}, i2d[] = {-4, 0};
    assert(intersection(i1d, 2, i2d, 2) == 1);

    int i1e[] = {-11, 2}, i2e[] = {-1, -1};
    assert(intersection(i1e, 2, i2e, 2) == 0);

    int i1f[] = {1, 2}, i2f[] = {3, 5};
    assert(intersection(i1f, 2, i2f, 2) == 0);

    int i1g[] = {1, 2}, i2g[] = {1, 2};
    assert(intersection(i1g, 2, i2g, 2) == 0);

    int i1h[] = {-2, -2}, i2h[] = {-3, -2};
    assert(intersection(i1h, 2, i2h, 2) == 0);

    return 0;
}

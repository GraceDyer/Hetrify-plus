#undef NDEBUG
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Forward declaration (do not implement this function here) */
int *compare(int *game, int game_size, int *guess, int guess_size);

int main(void)
{
    /* Test 1 */
    {
        int game[] = {1, 2, 3, 4, 5, 1};
        int guess[] = {1, 2, 3, 4, 2, -2};
        int expected[] = {0, 0, 0, 0, 3, 3};
        int *result = compare(game, 6, guess, 6);
        int i;
        for (i = 0; i < 6; i++)
        {
            assert(result[i] == expected[i]);
        }
    }

    /* Test 2 */
    {
        int game[] = {0, 5, 0, 0, 0, 4};
        int guess[] = {4, 1, 1, 0, 0, -2};
        int expected[] = {4, 4, 1, 0, 0, 6};
        int *result = compare(game, 6, guess, 6);
        int i;
        for (i = 0; i < 6; i++)
        {
            assert(result[i] == expected[i]);
        }
    }

    /* Test 3 (repeats the first set of input/output) */
    {
        int game[] = {1, 2, 3, 4, 5, 1};
        int guess[] = {1, 2, 3, 4, 2, -2};
        int expected[] = {0, 0, 0, 0, 3, 3};
        int *result = compare(game, 6, guess, 6);
        int i;
        for (i = 0; i < 6; i++)
        {
            assert(result[i] == expected[i]);
        }
    }

    /* Test 4 */
    {
        int game[] = {0, 0, 0, 0, 0, 0};
        int guess[] = {0, 0, 0, 0, 0, 0};
        int expected[] = {0, 0, 0, 0, 0, 0};
        int *result = compare(game, 6, guess, 6);
        int i;
        for (i = 0; i < 6; i++)
        {
            assert(result[i] == expected[i]);
        }
    }

    /* Test 5 */
    {
        int game[] = {1, 2, 3};
        int guess[] = {-1, -2, -3};
        int expected[] = {2, 4, 6};
        int *result = compare(game, 3, guess, 3);
        int i;
        for (i = 0; i < 3; i++)
        {
            assert(result[i] == expected[i]);
        }
    }

    /* Test 6 */
    {
        int game[] = {1, 2, 3, 5};
        int guess[] = {-1, 2, 3, 4};
        int expected[] = {2, 0, 0, 1};
        int *result = compare(game, 4, guess, 4);
        int i;
        for (i = 0; i < 4; i++)
        {
            assert(result[i] == expected[i]);
        }
    }

    printf("All tests passed!");
    return 0;
}

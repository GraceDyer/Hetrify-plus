static int out[1024];
int my_abs_int(int x)
{
    return (x < 0) ? -x : x;
}
/*
   compare:
   Computes the element-wise absolute difference between game[] and guess[].
   - game:      pointer to the first array
   - game_len:  number of elements in game[]
   - guess:     pointer to the second array
   - guess_len: number of elements in guess[]
   - out_len:   pointer to an integer where the function will store
                the number of valid results written to the return array

   Returns a pointer to a statically allocated array containing the differences.
   NOTE:  This static buffer is just for demonstration. In real usage,
          you'd likely want a dynamic allocation or an output parameter.
*/
int *compare(const int *game, int game_len, const int *guess, int guess_len, int *out_len)
{
    /* A simple static buffer for demonstration. */

    /* Determine how many elements we can safely compare. */
    int limit = (game_len < guess_len) ? game_len : guess_len;
    if (limit > 1024)
    {
        limit = 1024; /* Truncate to avoid overflow of the static buffer. */
    }

    /* Compute absolute differences. */
    for (int i = 0; i < limit; i++)
    {
        out[i] = my_abs_int(game[i] - guess[i]);
    }

    /* Tell the caller how many results are in out. */
    *out_len = limit;

    /* Return pointer to the static buffer. */
    return out;
}

/*
   A pure C (C99) reimplementation of the given C++ function.
   No headers, no external library functions, no STL.
   Returns a pointer to a statically allocated string holding the result.
   Be aware that storing results in a static buffer may not be thread-safe.
*/
static char result[1024];
char *change_base(int x, int base)
{
    /*
       We use a static buffer for the final result.
       If you call this function multiple times, each call will overwrite
       previous results. For a more robust solution, allocate memory
       dynamically or have the caller provide a buffer.
    */

    int remainders[64];
    int count = 0;
    int pos = 0;
    int i;

    /*
       Replicate the original logic: if x <= 0, return an empty string.
       (The provided C++ code never appends anything if x <= 0,
       so we mimic that.)
    */
    if (x <= 0)
    {
        result[0] = '\0';
        return result;
    }

    /*
       Gather all remainders in an array.
       The first remainder we find is the rightmost part of the final string.
    */
    while (x > 0)
    {
        remainders[count++] = x % base;
        x = x / base;
    }

    /*
       Build the final string by prepending each remainder's decimal
       representation. The last remainder in the list is actually the
       leftmost part of the result, so we loop from the end to the start.
    */
    for (i = count - 1; i >= 0; i--)
    {
        int r = remainders[i];
        char temp[12];
        char rev[12];
        int idx = 0;
        int revidx = 0;

        /* Convert r (the remainder) to its decimal string */
        if (r == 0)
        {
            /* If remainder is 0, store "0" */
            temp[idx++] = '0';
        }
        else
        {
            /* Gather digits in reverse order */
            while (r > 0)
            {
                rev[revidx++] = (char)('0' + (r % 10));
                r = r / 10;
            }
            /* Reverse them into temp */
            while (revidx > 0)
            {
                temp[idx++] = rev[--revidx];
            }
        }

        temp[idx] = '\0';

        /*
           Append this remainder's string to the overall result.
           We do not call any library function; we just copy character-by-character.
        */
        {
            int t = 0;
            while (temp[t] != '\0')
            {
                result[pos++] = temp[t++];
            }
        }
    }

    /* Null-terminate the final result */
    result[pos] = '\0';
    return result;
}

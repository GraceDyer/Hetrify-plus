#define MAX_SIZE 1024

static int out[MAX_SIZE];
int *f(int n, int *out_length)
{
    /*
       Since we cannot use dynamic allocation or std::vector,
       we'll store the results in a static buffer. Adjust MAX_SIZE as needed.
       The function returns a pointer to the static array and sets *out_length.
       Note that returning a pointer to static data can be problematic if
       multiple calls happen concurrently, but this adheres to the constraints.
    */

    int sum = 0;
    int prod = 1;
    int i;

    if (n < 0)
    {
        /* Handle negative n if desired, but behavior is unspecified.
           We'll just set out_length to 0 here. */
        *out_length = 0;
        return out;
    }

    for (i = 1; i <= n && i <= MAX_SIZE; i++)
    {
        sum += i;
        prod *= i;
        if ((i % 2) == 0)
        {
            out[i - 1] = prod;
        }
        else
        {
            out[i - 1] = sum;
        }
    }

    /* If n exceeds MAX_SIZE, we only store up to MAX_SIZE. */
    if (n > MAX_SIZE)
    {
        *out_length = MAX_SIZE;
    }
    else
    {
        *out_length = n;
    }

    return out;
}

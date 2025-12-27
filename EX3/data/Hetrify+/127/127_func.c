int max_int(int a, int b)
{
    return a > b ? a : b;
}

int min_int(int a, int b)
{
    return a < b ? a : b;
}

int intersection(const int *interval1, unsigned int len1,
                 const int *interval2, unsigned int len2)
{
    /* This function assumes each interval array has at least 2 elements. */
    int start = max_int(interval1[0], interval2[0]);
    int end = min_int(interval1[1], interval2[1]);
    int length = end - start;

    if (length < 2)
    {
        return 0;
    }

    /* check if length is prime */
    for (int i = 2; i * i <= length; i++)
    {
        if (length % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

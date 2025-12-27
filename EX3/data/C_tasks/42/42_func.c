int *incr_list(int *l, int length)
{
    if (!l)
        return 0;

    for (int i = 0; i < length; i++)
    {
        l[i] = l[i] + 1;
    }
    return l;
}

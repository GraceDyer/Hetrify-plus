int exchange(int *lst1, int lst1_len, int *lst2, int lst2_len)
{
    int num = 0;

    for (int i = 0; i < lst1_len; i++)
    {
        if (lst1[i] % 2 == 0)
        {
            num += 1;
        }
    }

    for (int i = 0; i < lst2_len; i++)
    {
        if (lst2[i] % 2 == 0)
        {
            num += 1;
        }
    }

    if (num >= lst1_len)
    {
        return 1;
    }

    return 0;
}

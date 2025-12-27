// Convert num1 and num2 from strings to integers.
int atoi(const char *str)
{
    int num = 0;
    int sign = 1;
    int i = 0;

    // Handle negative numbers.
    if (str[0] == '-')
    {
        sign = -1;
        i++;
    }

    for (; str[i] != '\0'; ++i)
    {
        num = num * 10 + str[i] - '0';
    }

    return sign * num;
}
int fruit_distribution(const char *s, int n)
{
    // Buffers for numbers extracted from the string.
    char num1[100] = "";
    char num2[100] = "";

    int is12 = 0;
    int i, j;
    j = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            if (is12 == 0)
            {
                // Append character to num1.
                int len = 0;
                while (num1[len] != '\0')
                    len++;
                num1[len] = s[i];
                num1[len + 1] = '\0';
            }
            else if (is12 == 1)
            {
                // Append character to num2.
                int len = 0;
                while (num2[len] != '\0')
                    len++;
                num2[len] = s[i];
                num2[len + 1] = '\0';
            }
        }
        else
        {
            if (is12 == 0 && num1[0] != '\0')
            {
                is12 = 1;
            }
        }
    }

    int num1_int = atoi(num1);
    int num2_int = atoi(num2);

    return n - num1_int - num2_int;
}

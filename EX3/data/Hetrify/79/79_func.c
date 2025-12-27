static char str[40];
char *decimal_to_binary(int decimal)
{
    /* Static buffer to hold "db", up to 32 bits, "db", and null terminator */

    char bits[32];
    int bit_count = 0;
    int i, pos;

    if (decimal == 0)
    {
        /* Special case for zero */
        str[0] = 'd';
        str[1] = 'b';
        str[2] = '0';
        str[3] = 'd';
        str[4] = 'b';
        str[5] = '\0';
        return str;
    }

    /* Extract binary digits in reverse order */
    {
        unsigned int temp = (unsigned int)decimal;
        while (temp > 0)
        {
            bits[bit_count++] = (char)('0' + (temp % 2));
            temp = temp / 2;
        }
    }

    /* Build the output string: "db" + bits + "db" */
    pos = 0;
    str[pos++] = 'd';
    str[pos++] = 'b';
    for (i = bit_count - 1; i >= 0; --i)
    {
        str[pos++] = bits[i];
    }
    str[pos++] = 'd';
    str[pos++] = 'b';
    str[pos] = '\0';

    return str;
}

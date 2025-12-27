unsigned int my_strlen(const char *str)
{
    unsigned int length = 0;
    while (str[length] != '\0')
    {
        ++length;
    }
    return length;
}

int my_strcmp(const char *str1, const char *str2)
{
    unsigned int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return str1[i] < str2[i] ? -1 : 1;
        }
        ++i;
    }
    if (str1[i] == '\0' && str2[i] == '\0')
    {
        return 0;
    }
    return str1[i] == '\0' ? -1 : 1;
}

void reverse_string(const char *src, char *dest, unsigned int length)
{
    unsigned int i;
    for (i = 0; i < length; ++i)
    {
        dest[i] = src[length - i - 1];
    }
    dest[length] = '\0'; // Null-terminate the reversed string
}

int is_palindrome(const char *text)
{
    unsigned int length = my_strlen(text);
    char reversed[length + 1]; // +1 for the null terminator
    reverse_string(text, reversed, length);
    return my_strcmp(text, reversed) == 0;
}

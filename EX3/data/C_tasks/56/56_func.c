unsigned int string_length(const char *str)
{
    unsigned int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

int correct_bracketing(const char *brackets)
{
    int level = 0;
    unsigned int length = string_length(brackets);
    for (unsigned int i = 0; i < length; i++)
    {
        if (brackets[i] == '<')
            level += 1;
        if (brackets[i] == '>')
            level -= 1;
        if (level < 0)
            return 0; // false
    }
    if (level != 0)
        return 0; // false
    return 1;     // true
}

int digits(int n){
    int prod = 1, has = 0;

    // Convert integer to string manually
    char s[12]; // large enough for an integer (-2147483648 to 2147483647)
    int index = 0;
    if (n == 0) {
        s[index++] = '0';
    } else {
        int is_negative = n < 0;
        if (is_negative) {
            n = -n;
        }
        // Fill string with digits in reverse order
        while (n > 0) {
            s[index++] = (n % 10) + '0';
            n /= 10;
        }
        // Reverse the string
        if (is_negative) {
            s[index++] = '-';
        }
        for (int i = 0; i < index / 2; ++i) {
            char temp = s[i];
            s[i] = s[index - i - 1];
            s[index - i - 1] = temp;
        }
    }
    s[index] = '\0';

    // Check each character
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] % 2 == 1) 
        {
            has = 1;
            prod = prod * (s[i] - '0');
        }
    if (has == 0) return 0;
    return prod;
}

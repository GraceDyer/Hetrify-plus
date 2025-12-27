static int result[2];
int *even_odd_palindrome(int n)
{
    /* We will store the results in a static array so that it persists after
       the function returns. Index 0 = count of even palindromes, index 1 = count of odd palindromes. */

    int numEven = 0;
    int numOdd = 0;
    int i;

    for (i = 1; i <= n; i++)
    {
        /* Check if i is a palindrome by reversing it and comparing to i. */
        int reversed = 0;
        int temp = i;
        while (temp > 0)
        {
            reversed = reversed * 10 + (temp % 10);
            temp = temp / 10;
        }

        if (reversed == i)
        {
            /* i is a palindrome, now check parity. */
            if ((i % 2) == 0)
            {
                numEven++;
            }
            else
            {
                numOdd++;
            }
        }
    }

    result[0] = numEven;
    result[1] = numOdd;
    return result;
}

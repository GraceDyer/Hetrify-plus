static int result[2];
int *sum_product(const int *numbers, int length)
{

    int sum = 0;
    int product = 1;
    int i;

    for (i = 0; i < length; i++)
    {
        sum += numbers[i];
        product *= numbers[i];
    }

    result[0] = sum;
    result[1] = product;
    return result;
}

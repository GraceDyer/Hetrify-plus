int skjkasdkd(int* lst, int lst_length) {
    int largest = 0;

    // Find the largest prime number in the list
    for (int i = 0; i < lst_length; i++) {
        if (lst[i] > largest) {
            // Check if lst[i] is a prime number
            int prime = 1;
            for (int j = 2; j * j <= lst[i]; j++) {
                if (lst[i] % j == 0) {
                    prime = 0;
                    break;
                }
            }
            if (prime) {
                largest = lst[i];
            }
        }
    }

    // Convert the largest to string and sum its digits
    int sum = 0;
    int number = largest;

    // Implementing a simple itoa-like conversion
    char buffer[12];  // Enough to hold the largest integer value plus null terminator
    int index = 0;

    if (number == 0) {
        buffer[index++] = '0';
    } else {
        while (number > 0) {
            buffer[index++] = (number % 10) + '0';
            number /= 10;
        }
    }

    // Reverse the digits in the buffer
    for (int i = 0; i < index / 2; i++) {
        char temp = buffer[i];
        buffer[i] = buffer[index - i - 1];
        buffer[index - i - 1] = temp;
    }

    buffer[index] = '\0';  // Null-terminating the string

    // Sum the digits
    for (int i = 0; i < index; i++) {
        sum += buffer[i] - '0';
    }

    return sum;
}

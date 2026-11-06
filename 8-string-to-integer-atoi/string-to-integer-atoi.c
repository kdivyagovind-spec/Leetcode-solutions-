int myAtoi(char* s) {
    int i = 0;
    int sign = 1;
    long long num = 0;

    // Step 1: Skip leading spaces
    while (s[i] == ' ') {
        i++;
    }

    // Step 2: Check sign
    if (s[i] == '-') {
        sign = -1;
        i++;
    }
    else if (s[i] == '+') {
        i++;
    }

    // Step 3: Convert digits
    while (s[i] >= '0' && s[i] <= '9') {
        num = num * 10 + (s[i] - '0');

        // Step 4: Check overflow
        if (sign == 1 && num > 2147483647)
            return 2147483647;

        if (sign == -1 && num > 2147483648LL)
            return -2147483647 - 1;

        i++;
    }

    return (int)(num * sign);
}
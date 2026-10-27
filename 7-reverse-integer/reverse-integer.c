int reverse(int x) {
    // initializing the answer (rev) to 0
    int rev = 0,digits;
    while (x != 0) {
        // extracting last digit of x
        digits = x % 10;
        // check for overfloww
         if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digits > 7))
            return 0;
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digits < -8))
            return 0;
        // storing the digit into answer(rev)
        rev = rev * 10 + digits;
        // Removing last digit from x
        x = x / 10;
    }
    return rev;
}
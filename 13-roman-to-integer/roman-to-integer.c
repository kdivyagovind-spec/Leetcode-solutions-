int romanToInt(char* s) {
    int res = 0;  // Stores the final integer value
    int prev = 0;  // Stores the previous Roman numeral value

    // Array containing Roman numeral characters
    char roman[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};

    // Array containing corresponding integer values
    int val[7] = {1, 5, 10, 50, 100, 500, 1000};

    // Traverse the string from right to left
    for (int i = strlen(s) - 1; i >= 0; i--) {

        // Find the integer value of the current Roman character
        for (int j = 0; j < 7; j++) {

            if (s[i] == roman[j]) {

                // If current value is smaller than the previous value,
                // subtract it because it represents a subtractive notation
                if (val[j] < prev) {
                    res -= prev;
                    prev -= val[j];
                    res += prev;
                }

                // Otherwise, add the current value to the result
                else {
                    res += val[j];

                    // Update the previous value
                    prev = val[j];
                }
            }
        }
    }

    // Return the final integer value
    return res;
}
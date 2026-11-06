char* convert(char* s, int numRows) {
    int n = strlen(s);
    if (numRows == 1 || numRows >= n) return s;

    int cycleLen = 2 * numRows - 2;
    char* result = (char*)malloc(n + 1);
    int k = 0;

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j + i < n; j += cycleLen) {
            result[k++] = s[j + i]; // vertical char
            if (i != 0 && i != numRows - 1 && j + cycleLen - i < n) {
                result[k++] = s[j + cycleLen - i]; // diagonal char
            }
        }
    }

    result[k] = '\0';
    return result;
}
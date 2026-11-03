int titleToNumber(char* columnTitle) {
    long result = 0;
    for (int i = 0; columnTitle[i] != '\0'; i++) {
        result = result * 26 + (columnTitle[i] - 'A' + 1);
    }
    return (int)result;
}
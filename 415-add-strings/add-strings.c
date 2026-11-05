char* addStrings(char* num1, char* num2) {
    int i = strlen(num1) - 1, j = strlen(num2) - 1, carry = 0;
    char* ans = (char*)malloc(10001 * sizeof(char)); 

    int k = 0; 

    while (i >= 0 || j >= 0 || carry == 1) {
        if (i >= 0) {
            carry += num1[i] - '0';
            i--;
        }
        if (j >= 0) {
            carry += num2[j] - '0';
            j--;
        }
        ans[k] = (carry % 10) + '0';
        carry /= 10;
        k++;
    }

    ans[k] = '\0'; 
    for (int m = 0, n = k - 1; m < n; m++, n--) {
        char temp = ans[m];
        ans[m] = ans[n];
        ans[n] = temp;
    }

    return ans;
}
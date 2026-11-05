#include <stdlib.h>
#include <string.h>

char* addStrings(char* num1, char* num2) {
    int i = strlen(num1) - 1;
    int j = strlen(num2) - 1;

    int n = strlen(num1);
    int m = strlen(num2);

    int max = (n > m ? n : m);

    char *result = (char*)malloc((max + 2) * sizeof(char));

    int k = max;
    result[max + 1] = '\0';

    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0)
            sum += num1[i--] - '0';

        if (j >= 0)
            sum += num2[j--] - '0';

        result[k--] = (sum % 10) + '0';

        carry = sum / 10;
    }

    return result + k + 1;
}
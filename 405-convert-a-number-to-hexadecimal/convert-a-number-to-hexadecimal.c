char* toHex(int num) {
    unsigned int n = (unsigned int) num;
    char *s = malloc(9*sizeof(char));
    s[8] = '\0';
    int i = 7,k;
    do {
        k=15;
        int k = n & 15;
        s[i--] = (k < 10) ? k + '0' : k - 10 + 'a';
        n >>= 4;
    } while(n);

    return &s[i+1];
}
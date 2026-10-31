char* convertToTitle(int columnNumber) {
    char* st = malloc(sizeof(char)*30);
    int size = 0;
    while(columnNumber)
    {
        columnNumber--;
        st[size++] = (columnNumber % 26) + 'A' ;
        columnNumber /= 26;
    }

    st[size] = '\0';
    char temp;
    for(int i = 0; i < size/2; i++)
    {
        temp = st[i];
        st[i] = st[size - i - 1];
        st[size - i -1] = temp;
    }
    return st;
}
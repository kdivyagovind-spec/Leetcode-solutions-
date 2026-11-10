int arrangeCoins(int n) {
    long long i;
    int row;

    i = 0;
    row = 2;
    while (i < n)
    {
        i += row;
        row++;
    }
    if (i == (n - 1))
        return (row - 1);
    return (row - 2);
}
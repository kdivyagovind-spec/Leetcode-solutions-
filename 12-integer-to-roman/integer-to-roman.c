static int count(int num)
{
    int total = 0;
    static int tab[11];

    tab[0] = 0; // this is just to initialize tab[0], it is useless
    tab[1] = 1;
    tab[2] = 2;
    tab[3] = 3;
    tab[4] = 2;
    tab[5] = 1;
    tab[6] = 2;
    tab[7] = 3;
    tab[8] = 4;
    tab[9] = 2;
    tab[10] = 1;
    if (num >= 1000)
    {
        total += (num / 1000);
        num -= (num / 1000) * 1000;
    }
    if (num >= 100)
    {
        total += (tab[num / 100]);
        num -= (num / 100) * 100;
    }
    if (num >= 10)
    {
        total += (tab[num / 10]);
        num -= (num / 10) * 10;
    }
    if (num >= 1)
        total += (tab[num]);
    return (total);
}

char* intToRoman(int num)
{
    int i = 0;
    int nbr = count(num);
    char *total = malloc((nbr + 1) * sizeof(char));
    if (!total)
        return (NULL);
    total[nbr] = '\0';
    while (num >= 1000) // thousands
    {
        total[i++] = 'M';
        num -= 1000;
    }
    while (num >= 100) // hundreds
    {
        if (num / 100 == 9)
        {
            total[i++] = 'C';
            total[i++] = 'M';
            num -= 900;
        }
        else if (num / 100 >= 5)
        {
            total[i++] = 'D';
            num -= 500;
        }
        else if (num / 100 == 4)
        {
            total[i++] = 'C';
            total[i++] = 'D';
            num -= 400;
        }
        else
        {
            total[i++] = 'C';
            num -= 100;
        }
    }
    while (num >= 10) // tens
    {
        if (num / 10 == 9)
        {
            total[i++] = 'X';
            total[i++] = 'C';
            num -= 90;
        }
        else if (num / 10 >= 5)
        {
            total[i++] = 'L';
            num -= 50;
        }
        else if (num / 10 == 4)
        {
            total[i++] = 'X';
            total[i++] = 'L';
            num -= 40;
        }
        else
        {
            total[i++] = 'X';
            num -= 10;
        }
    }
    while (num >= 1) // units
    {
        if (num == 9)
        {
            total[i++] = 'I';
            total[i++] = 'X';
            return (total);
        }
        else if (num >= 5)
        {
            total[i++] = 'V';
            num -= 5;
        }
        else if (num == 4)
        {
            total[i++] = 'I';
            total[i++] = 'V';
            return (total);
        }
        else
        {
            total[i++] = 'I';
            num--;
        }
    }
    return (total);
}
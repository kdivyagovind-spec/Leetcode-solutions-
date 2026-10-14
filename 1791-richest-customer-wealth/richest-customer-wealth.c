int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int n=accountsSize;
    int output=0;
    for(int i=0;i<n;i++)
    {
        int wealth=0;
        //iterate for everyy bank in a customer
        for(int j=0;j<*accountsColSize;j++)
        {
            wealth+=accounts[i][j];
        }
        if(wealth>output)
        {
            output=wealth;
        }
           
    }
    return output;
    
}
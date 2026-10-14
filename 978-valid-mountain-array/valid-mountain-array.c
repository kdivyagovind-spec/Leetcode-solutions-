

bool validMountainArray(int* arr, int arrSize) {

    if(arrSize<3)
    {
        return false;
    }
    //strictlyy increasing
    int i=0;
    while(i<arrSize-1 && arr[i]<arr[i+1])
    {
        i++;
    }
    //if the full array is strictlyy inc then i will be at n-1(it will reach end)
    //if the full array is strictlyy dec then i will be at 0(still at start)
    if(i==0 || i==arrSize-1)
    {
        return false;
    }
    //strictly decreasing
    while(i<arrSize-1 && arr[i]>arr[i+1])
    {
        i++;
    }
    return i==arrSize-1 ; //This is valid only if we reach end
}
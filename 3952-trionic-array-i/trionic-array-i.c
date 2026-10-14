bool isTrionic(int* nums, int numsSize) {
    int i = 0;
    //strictly increasing part
    while (i + 1 < numsSize && nums[i] < nums[i + 1])
    {
        i++;

    } 
    if (i == 0 || i == numsSize - 1) 
    {
        return false;
    }
    //strictly decreasing part 
    int p = i;
    while(i + 1 < numsSize && nums[i] > nums[i + 1]) 
    {  
        i++;
    }
    if ( i== p || i == numsSize - 1)
    {
        return false;
    }
    //strictly increasing part
    while (i + 1 < numsSize && nums[i] < nums[i + 1]) 
    {
        i++;
    }
    return i == numsSize - 1;
}
    
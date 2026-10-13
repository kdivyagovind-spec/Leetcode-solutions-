void moveZeroes(int* nums, int numsSize) {
    int j=0;
    for(int i=0;i<numsSize;i++)
    {
        //if ith element is non zero ,swap i and j elements
        if(nums[i]!=0)
        {
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j++]=temp;
        }
    }






    
}
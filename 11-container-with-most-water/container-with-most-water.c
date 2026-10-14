int maxArea(int* height, int heightSize) {
    int n=heightSize;
    int i = 0,j =n-1;
    int res = 0;

    while (i != j) {
        int length=j-i;
        int breadth=height[i]<height[j] ? height[i]:height[j];
        int area =length*breadth;
        if(area>res)
        {
            res=area;
        }
        if(height[i]<height[j])
        {
            i++;
        }
        else{
            j--;
        }
       

    }
     return res;

}


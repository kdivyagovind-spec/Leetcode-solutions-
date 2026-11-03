int addDigits(int num) {
    int digit;
    int sum=0;
   
    while(num!=0){
        digit=num%10;
        sum=sum+digit;
        num=num/10;

    }while(sum>9){
            int newsum = 0;
        while(sum!=0){
            digit = sum%10;
            newsum=newsum+digit;
            sum=sum/10;         
        }
        sum=newsum;
    }
       return sum;
}
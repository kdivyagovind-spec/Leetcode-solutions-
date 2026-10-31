bool isHappy(int n){
    int total = 0;
    while(true){
        while(n > 0){
            total += (n % 10) * (n % 10);
            n /= 10;
        }
        if(total == 1)
            return true;
        else if(total == 4)
            return false;
        n = total;
        total = 0;
    }
}
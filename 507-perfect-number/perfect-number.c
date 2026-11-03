bool checkPerfectNumber(int num) {
    // 1 is not a perfect number since its only divisor is itself
    if (num <= 1) {
        return false;
    }
    
    int sum = 1; // 1 is a divisor for all numbers > 1
    
    // Iterate up to the square root of num
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            // If the divisors are distinct, add the paired divisor
            if (i * i != num) {
                sum += num / i;
            }
        }
    }
    
    return sum == num;
}
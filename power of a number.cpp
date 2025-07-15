int reverse(int n) {
      int digit=0;
        while(n>0) {
            int rem=n%10;
            digit = digit*10 + rem;
            n=n/10;
        }
        return digit;
  }
  
    int reverseExponentiation(int n) {
        int power=1;
        // code here
        int expo = reverse(n);
        for(int i=1;i<=expo;i++) {
            power = power * n;
        }
        return power;
    }

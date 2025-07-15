// sum of digit is divisible by number

int sumOfTheDigitsOfHarshadNumber(int x) {
        int temp=x;
        int sum=0;
        while(x>0) {
            int rem = x%10;
            sum=sum+rem;
            x=x/10;
        }
        if(temp%sum==0) return sum;
        else return -1;
    }

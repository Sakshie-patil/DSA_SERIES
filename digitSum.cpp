// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int digitsum(int n) {
   int sum=0;
   int lastdigit;
    while(n!=0) {
        lastdigit=n%10;
        n=n/10;
        sum=sum+lastdigit;
  
    }
    return sum;
}


int main() {
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<digitsum(n);
    


    return 0;
}

// addition of factors is equal to number

#include<iostream>
#include<cmath>
using namespace std;

int isPerfect(int n) {
    int sum=0;
  for(int i=1;i<=n/2;i++) {
      if(n%i == 0) {
          sum+= i;
      }
  }
  return sum==n;
}

int main() {
       int n = 6;
    if (isPerfect(n))
        cout << n << " is a Perfect Number.";
    else
        cout << n << " is NOT a Perfect Number.";

}

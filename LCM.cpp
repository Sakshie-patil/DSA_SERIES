#include <iostream>
#include <vector>
using namespace std;

int gcd(int a , int b) {
    while(a>0 && b>0) {
      if(a>b) {
          a = a % b;
      } else {
          b = b % a;
      }
  }
  if(a==0) {
      return b;
  }
else {
    return a;
}
}

int lcm(int a , int b) {
   int gcd1= gcd(a,b);
   int ans = a*b / gcd1;
   return ans;
}

int main() {
   int a=20;
   int b=28;
  cout<<lcm(a,b);
}

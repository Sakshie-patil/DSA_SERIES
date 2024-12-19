// euclids theorem for calcultaing gcd of 2 numbers

#include <iostream>
#include <vector>
using namespace std;

int main() {
   int a=0;
   int b=8;
  while(a>0 && b>0) {
      if(a>b) {
          a = a % b;
      } else {
          b = b % a;
      }
  }
  if(a==0) {
      cout <<b;
  }
else {
    cout<<a;
}
}

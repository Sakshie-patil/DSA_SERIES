// count prime numbers within range using sieve of eratosthenes
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
   cin>>n;
   vector <bool> isPrime(n+1 , true) ;
   int count=0;
   for(int i=0;i<n;i++) {
       if(isPrime[i]) {
           count++;
           for(int j=i*2;j<n;j=j+i) {
               isPrime[j]=false;
           }
       }
   }
   cout<<count;
}

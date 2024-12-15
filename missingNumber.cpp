#include <iostream>
#include <climits>
using namespace std;

int missingNumber(int arr[] , int n) {
    int sum1 = 0;
    int sum2=0;
    for(int i=0;i<n;i++) {
        sum1 = arr[i] + sum1;
    }
    
   for(int j=0; j<=n ;j++) {
       sum2 = sum2 + j;
   }
  
  int ans = sum2 - sum1;
  return ans;
   
}

int main() {
    int arr[] ={9,6,4,2,3,5,7,0,1};
    int n=sizeof(arr)/sizeof(int);
    cout<<missingNumber(arr , n);
}

#include <iostream>
#include <climits>
using namespace std;

  int singleNumber(int arr[] , int n) {
      int ans=0;
      for(int i=0;i<n;i++) {
          ans=ans^arr[i];
      }
      return ans;
  }

int main() {
    int arr[] ={4,1,2,1,2};
    int n=sizeof(arr)/sizeof(int);
    cout<<singleNumber(arr,n);
}

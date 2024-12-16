// TC : O(n^2) not the most optimal one i think can be solved by hash maps but that is not taught yet

#include <iostream>
#include <climits>
using namespace std;

  int longestSubarraySum(int arr[] , int n , int k) {
      int len=0;
      for(int i=0;i<n;i++) {
          int currsum =0;
          for(int j=i;j<n;j++) {
              currsum = currsum + arr[j];
              if(currsum == k) {
                  len = max(len , j-i+1);
              }
          }
      }
      return len;
  }


int main() {
    int arr[] ={1, -1, 5, -2, 3};
    int n=sizeof(arr)/sizeof(int);
    int k=3;
    cout<<longestSubarraySum(arr , n,k);
}

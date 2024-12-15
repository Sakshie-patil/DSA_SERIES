#include <iostream>
#include <climits>
using namespace std;

int consecutiveOnes(int arr[] , int n) {
    int count = 0;
    int ans = INT_MIN;
    for(int i=0;i<n;i++) {
        if(arr[i]==1)  {
               count++;
               ans = max(ans , count);
        }
        else 
            count = 0;
    }
    return ans;
}

int main() {
    int arr[] ={1,1,1,0,1,1,1,1};
    int n=sizeof(arr)/sizeof(int);
    cout<<consecutiveOnes(arr , n);
    
}

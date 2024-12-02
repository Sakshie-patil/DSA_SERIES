#include <iostream>
using namespace std;

// majority element should appear n/2 times in an array 
int majorityElement(int arr[] , int size) {
    int freq=0;
    int ans=0;
    for(int i=0;i<size;i++) {
        if(freq==0) {
            ans= arr[i];
        }
        if(ans==arr[i]) {
            freq++;
        }
        else {
            freq--;
        }
    }
    return ans;
}
int main() {
    int arr[] = {1,2,1,2,1,1};
    int size= sizeof(arr)/sizeof(int);
    
    int index=majorityElement(arr , size);
    cout<< index;
}

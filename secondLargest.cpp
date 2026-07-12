#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[] = {1,2,3,5,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int largest=arr[0];
    int sLargest = INT_MIN;
    
    for(int i=1;i<n;i++) {
        if(arr[i] > largest) {
            sLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > sLargest) {
            sLargest = arr[i];
        }
    }
    cout<<sLargest;
}

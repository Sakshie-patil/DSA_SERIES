#include <iostream>
using namespace std;

void leftRotate(int arr[], int n) {
    int x;
    x=arr[0];
    for(int i=0;i<n-1;i++) {
        arr[i]=arr[i+1];
    }
    
    arr[n-1] = x;
    
}


void printArray(int arr[] , int n) {
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}


int main() {
    int arr[]= { 1,2,3,4,5};
    int n=sizeof(arr)/sizeof (int);
    leftRotate(arr,n);
    printArray(arr,n);
}

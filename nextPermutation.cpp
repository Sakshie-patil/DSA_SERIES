#include <iostream>
using namespace std;

void nextPermutation(int arr[] , int n) {
    
    //step 1: finding pivot element
    int pivot = -1;
    for(int i=n-2;i>=0;i--) {
        if(arr[i]<arr[i+1]) {
            pivot=i;
            break;
        }
    }
    
    if(pivot==-1) {
        int i= 0;
        int j=n-1;
        while(i<=j) {
            swap(arr[i],arr[j]); 
            i++;
            j--;
    }
      return;
    }
    
    //2nd step : finding largest right most element 
    for(int i=n-1;i>=0;i--) {
        if(arr[i]>arr[pivot]) {
            swap(arr[i],arr[pivot]);
            break;
        }
    }
    
    //3rd step : reverse remaining element
    int p= pivot+1;
    int q=n-1;
    while(p<=q) {
        swap(arr[p],arr[q]); 
            p++;
            q--;
    }
}

//printing array
void printArray(int arr[],int n) {
    for(int i=0;i<n;i++) {
         cout<<arr[i];
    }
}

int main() {
    int arr[] = {1,2,3,5,4};
    int n=sizeof(arr)/sizeof(int);
    nextPermutation(arr , n);
    printArray(arr,n);
}

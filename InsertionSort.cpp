#include <iostream>
using namespace std;

void insertionSort(int arr[] , int size) {
    for(int i=1; i<size ;i++) {  /*array is starting from unsorted part i.e. arr[1] */
    int curr=arr[i];
    int prev = i-1;
    while(arr[prev]>curr && prev>=0) {
        arr[prev+1] = arr[prev];
        prev--;
    }
    arr[prev+1] = curr; 
        
    }
}


void printArray(int arr[],int size) {
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {66,5,4,3,2,1,7,8};
    int size=sizeof(arr)/sizeof(int);
    insertionSort(arr , size);
    printArray(arr,size);
}

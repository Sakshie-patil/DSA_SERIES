#include <iostream>
using namespace std;

void selectionSort(int arr[],int size) {
    for(int i=0;i<size;i++) {
        int smallestIdx= i;
        for(int j=i+1;j<size;j++) {
            if(arr[j]<arr[smallestIdx]) {
                smallestIdx=j;
            }
        }
        swap(arr[i],arr[smallestIdx]);
    }
}

void printArray(int arr[],int size) {
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {6,5,4,3,2,1,7,8};
    int size=sizeof(arr)/sizeof(int);
    selectionSort(arr , size);
    printArray(arr,size);
}

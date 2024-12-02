#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    bool isswap= false;
    for(int i=0;i<size;i++) {
        for(int j=0;j<size-i-1;j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                isswap = true;
            }
        }
        if(isswap==false) {
            break;
        }
    }
}

void printArray(int arr[],int size) {
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(int);
    bubbleSort(arr , size);
    printArray(arr,size);
}

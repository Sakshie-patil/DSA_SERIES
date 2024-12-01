#include <iostream>
using namespace std;

int binarySearch(int arr[] , int size) {
    int low=1;
    int high=size-2;
    int mid;
    while(low <=high) {
       mid = low + (high-low)/2;
       if(arr[mid-1]<= arr[mid] >= arr[mid+1]) {
           return mid;
       }
       if(arr[mid-1]< arr[mid]) {
           low = mid + 1;
       }
       else {
           high = mid - 1;
       }
}
}

int main() {
    int arr[] = {0,3,8,9,5,2};
    int size= sizeof(arr)/sizeof(int);
    int target=0;
    int index=binarySearch(arr , size);
    cout<< index;
}

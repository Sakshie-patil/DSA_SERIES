#include <iostream>
using namespace std;

int rotatedBinarySearch(int arr[] , int size , int target) {
    int low=0;
    int high=size-1;
    int mid;
    while(low <=high) {
       mid = low + (high-low)/2;
       if(arr[mid]==target) {
           return mid;
       }
       if(arr[low]<=arr[mid]) { //left sorted
           if(arr[low]<=target && target <= arr[mid]) 
           high = mid-1;
           else 
           low = mid +1;
       } 
       else { //right sorted array
           if(arr[mid]<= target && target <= arr[high])
           low=mid+1;
           else 
           high = mid-1;
       }
    }
    return -1;
}

int main() {
    int arr[] = {4,5,6,7,0,1,2};
    int size= sizeof(arr)/sizeof(int);
    int target=0;
    int index=rotatedBinarySearch(arr , size , target);
    cout<< index;
}

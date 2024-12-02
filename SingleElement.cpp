#include <iostream>
using namespace std;

int binarySearch(int arr[] , int size) {
    int low=0;
    int high=size-1;
    
    if(size==1) 
    return arr[0];
    while(low<=high) {
       int  mid = low + (high - low)/2;
       
     //corner cases
        if(mid==0 && arr[0]!=arr[1])
        return mid;  // return arr[0]
        if(mid==size-1 && arr[size-1]!=arr[size-1]) 
        return mid;  // return arr[size-1]
         
        if(arr[mid-1]!= arr[mid] && arr[mid]!=arr[mid+1] ) {
            return mid;
        }
        
        if(mid % 2==0) {  //even
            if(arr[mid-1]==arr[mid]) 
            high = mid-1;
            else 
            low = mid+1;
    }
    else { //odd
        if(arr[mid-1]==arr[mid])
        low = mid+1;
        else 
        high = mid -1;
    }
   
}
 return -1;
}

int main() {
    int arr[] = {1,1,2,3,3,4,4,8,8};
    int size= sizeof(arr)/sizeof(int);
    
    int index=binarySearch(arr , size);
    cout<< index;
}

// TIME COMPLEXITY : O(n)
#include<iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int start=0;
    int end=size-1;
    while(end>start) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
    
int main() {
    int arr[] = { 1 , 2,3, 4,5 ,6};
    int size=sizeof(arr)/sizeof(int);
    reverseArray(arr,size);
     //print array
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
}

}

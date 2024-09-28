//swap greatest and smallest number from array
#include<iostream>
#include<climits>
using namespace std;

void reverse(int arr[],int size) {
    int small=INT_MAX;
    int large=INT_MIN;
    int value;
    for(int i=0;i<size;i++) {
        if(arr[i]< small) {
            small=i;
        }
        if(arr[i] > large) {
            large=i;
        }
           
    }
     swap(arr[small],arr[large]);
}
    
int main() {
    int arr[] = { 1 ,2,3,4};
    int size=sizeof(arr)/sizeof(int);
    reverse(arr,size);
    //print array
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
return 0;
}

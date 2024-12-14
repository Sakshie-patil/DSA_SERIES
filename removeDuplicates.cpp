#include <iostream>
using namespace std;

int removeDuplicate(int arr[] , int n) {
    int i=0;
    for(int j=1;j<n;j++) {
        if(arr[i]!=arr[j]) {
            i++;
            arr[i]=arr[j];
        }
    }
   return i+1; //returning the value of the index not array because elements are arranged in asecding order
}
int main() {
    int arr[]={1,1,2,2,2,3,3};
    int n=sizeof(arr)/sizeof(int);
   int k=  removeDuplicate(arr,n);  //storing index value and looping till that index and printing array
    for(int i=0;i<k;i++) {
        cout<<arr[i]<<' ';
    }
}

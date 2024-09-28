#include<iostream>
using namespace std;

int sumArray(int arr[],int size) {
    int ans=0;
    for(int i=0;i<size;i++) {
        ans=ans + arr[i];
    }
    return ans;
}
int productArray(int arr[],int size) {
    int ans=1;
    for(int i=0;i<size;i++) {
        ans=ans * arr[i];
    }
    return ans;
}
    
int main() {
    int arr[] = { 1 ,2,3,4};
    int size=sizeof(arr)/sizeof(int);
    cout<<sumArray(arr,size)<<endl;
    cout<<productArray(arr,size);
    
return 0;

}

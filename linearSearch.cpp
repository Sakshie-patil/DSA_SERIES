#include<iostream>
#include<climits>
using namespace std;

int linearSearch(int arr[], int size,int target) {
    for(int i=0;i<size;i++) {
        if(arr[i]==target) {
            return i;//FOUND
        }
    }
    return -1;//NOT FOUND
    
}

int main(){
    int index;
    int arr[] ={ 4,2,7,8,1,2,5};
    int size= sizeof(arr)/sizeof(int);
    int target=5;
    index=linearSearch(arr,size,target);
    cout<<index<<" ";
    return 0;
}

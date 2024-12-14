#include <iostream>
#include <climits>
using namespace std;

int main () {
    int arr[] = {1, 2, 3, 4, 5};
    int size= sizeof(arr)/sizeof(int);
    int last_element;
    last_element = arr[size-1];
    for(int i=size-1;i>0;i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = last_element;
    
     //print array
    
    for(int i=0;i<size ;i++) {
        cout<<arr[i]<<" ";
    }
   

}

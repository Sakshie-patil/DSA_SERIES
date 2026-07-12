// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>&arr, int n) {
    // insertion sort
    for(int i=1;i<n;i++) {
        int key = arr[i];
        int j = i-1;
        
        while(j>=0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {
   vector<int>arr = {100,90,80,70,60,50};
   // 100 90 80 70 60 50
   // 
   int n = arr.size();
  insertionSort(arr,n);
   for(int i=0;i<n;i++) {
       cout<<arr[i]<<" ";
   }
    return 0;
}

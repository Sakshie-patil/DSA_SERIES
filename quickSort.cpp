// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

int partition(vector<int>&arr, int low, int high) {
    int pivot = arr[low];
    
    int i=low;
    int j=high;
    
    while(j>i) {
        while(arr[i] <= pivot && i<high) i++;
        while(arr[j] > pivot && j>low) j--;
        
        if(j>i) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}

void quickSort(vector<int>&arr, int low, int high) {
    // base condition
    if(low >= high) return;
    int p = partition(arr, low, high);
    quickSort(arr,low,p-1);
    quickSort(arr,p+1,high);
}

int main() {
   vector<int> arr = {90,80,70,60,50};
   int n = arr.size();
   quickSort(arr, 0 , n-1);
   for(int i=0;i<n;i++) {
      cout<<arr[i]<<" ";
   }

    return 0;
}

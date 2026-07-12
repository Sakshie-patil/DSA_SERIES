// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>&arr, int low, int mid, int high) {
    vector<int>temp;
    
    int i=low;
    int j=mid+1;
    
    while(i <=mid && j <= high) {
        if(arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        }
        else {
            temp.push_back(arr[j]);
            j++;
        }
    }
    
    while(i <= mid) {
         temp.push_back(arr[i]);
         i++;
    }
    
    while(j <= high) {
        temp.push_back(arr[j]);
        j++;
    }
    
    // remember i value
    for(int i=low;i<=high;i++) {
        arr[i] = temp[i-low];
    }
}

void mergeSort(vector<int>&arr, int low, int high) {
    //*****IMP*****
    if(low>=high) return;
    int mid = (low + high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr,low,mid,high);
}

int main() {
   vector<int>arr = {100,90,80,70,60,50};
   int n = arr.size();
  mergeSort(arr,0,n-1);
   for(int i=0;i<n;i++) {
       cout<<arr[i]<<" ";
   }
    return 0;
}

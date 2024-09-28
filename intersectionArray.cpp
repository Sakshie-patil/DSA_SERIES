#include<iostream>
using namespace std;

void intersection(int arr1[], int arr2[], int size1,int size2) {
    for(int i=0;i<size1;i++) {
        for(int j=0;j<size2;j++) {
            if(arr1[i]==arr2[j]) {
                cout<<arr1[i]<<" ";
                
            }
        }
    }
}
int main() {
    int arr1[]={1,2,3};
    int size1=sizeof(arr1)/sizeof(int);
      int arr2[]={6,3,1,2};
    int size2=sizeof(arr2)/sizeof(int);
    intersection(arr1,arr2,size1,size2);
    
}

// if dont want to print duplicate element that appears in both the array
#include <iostream>
using namespace std;

void intersection(int arr1[], int arr2[], int size1, int size2) {
    bool found;  // Variable to track if the element has already been printed
    
    cout << "Intersection of the two arrays: ";
    
    for (int i = 0; i < size1; i++) {
        found = false;  // Reset found for each element in arr1
        
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                // Check if the element is already printed
                for (int k = 0; k < i; k++) {  // Check previous elements in arr1
                    if (arr1[k] == arr1[i]) {
                        found = true;  // Element has already been printed
                        break;
                    }
                }
                
                // If not found, print it
                if (!found) {
                    cout << arr1[i] << " ";
                }
            }
        }
    }
    
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 3};
    int size1 = sizeof(arr1) / sizeof(int);
    int arr2[] = {6, 3, 1, 2, 2};
    int size2 = sizeof(arr2) / sizeof(int);
    
    intersection(arr1, arr2, size1, size2);
    
    return 0;
}

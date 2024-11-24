// by using array

#include <iostream>
#include <vector>
#include<climits>
using namespace std;

int MaxSubarraySum(int arr[] , int size) {
    int maxsum= INT_MIN;
    int currsum=0;
    for(int i=0;i<size;i++) {
        currsum =currsum + arr[i];
        maxsum= max(currsum,maxsum);
        if( currsum<0) {
            currsum=0;
        }
        
    }
    return maxsum;
}

int main() {
    int arr[] = { 3 , -4 ,5,4,-1,7,-8};
    int size=sizeof(arr)/sizeof(int);
    int value=MaxSubarraySum(arr , size);
    cout<<value;
}

// vector using vector 

#include <iostream>
#include <vector>
#include<climits>
using namespace std;

int MaxSubarraySum(vector <int>& vect , int size) {
    int maxsum=INT_MIN;
    int currsum=0;
    for(int i : vect) {
        currsum= currsum + i;
        maxsum = max(currsum , maxsum);
        if ( currsum <0) {
            currsum=0;
        }
    }
    return maxsum;
}

int main () {
    vector <int> vect = { 3 , -4 ,5,4,-1,7,-8};
    int size=vect.size();
   int value= MaxSubarraySum(vect , size);
   cout<<value;
    
}

#include <iostream>
using namespace std;

int main() {
    int n=4;
    //top
   //outer loop
    for(int i=0;i<n;i++) {
        //nums set 1
        for(int j=0 ; j< i+1 ; j++) {
            cout<<"*";
        }
        //spaces
        for(int j=0 ; j<2*(n-i-1) ; j++) {
            cout<<" ";
        }
        //for nums set2
        for(int j=0 ; j<i+1 ; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    
    //bottom
    //outer loop
    for(int i=0 ;i <n ;i++) {
        //nums set 1
        for(int j=0 ; j<n-i ; j++) {
            cout<<"*";
        }
        //spaces
        for(int j=0; j< 2*i ; j++) {
            cout<<" ";
        }
        //nums set 2
        for(int j=0; j<n-i ; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
     
    
   return 0;
}

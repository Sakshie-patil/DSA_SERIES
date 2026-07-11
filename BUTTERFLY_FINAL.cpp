#include<iostream>
using namespace std;

// Upper Half

// Left Triangle      Right Triangle
// *                  *
// **                **
// ***              ***
// ****            ****

int main() {
    int n;
    cout<<"enter number: ";
    cin >> n;
    //upper
    for(int i=1;i<=n;i++) {
        // stars - 1st traingle
        for(int j=1;j<=i;j++) {
            cout<<"*"<<" ";
        }
        
        // spaces - 2nd traingle
        for(int j=2*(n-i);j>=1;j--) {
            cout<<"  ";
        }
        
        // stars - 2nd traingle
        for(int j=1;j<=i;j++) {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
    //   Lower Half

// ****            ****
// ***              ***
// **                **
// *                  *
  
    // lower
    for(int i=1;i<=n;i++) {
        // stars = 1st traingle
        for(int j=n-i+1;j>=1;j--) {
            cout<<"*"<<" ";
        }
        
        // spaces - 2nd traingle 
        for(int j=1;j<=2*(i-1);j++) {
            cout<<"  ";
        }
        
        // stars - 2nd traingle
        for(int j=n-i+1;j>=1;j--) {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

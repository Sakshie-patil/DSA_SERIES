// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n=10;
    // upper part of butterfly
    for(int i=1;i<=n;i++) {
        // left stars
        for(int j=1;j<=i;j++) {
            cout<<"*";
        }
        // spaces
        for(int j=1;j<=2*(n-i);j++) {
            cout<<" ";
        }
        // right stars
        for(int j=1;j<=i;j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    
    // lower part
     for(int i=n-1;i>=1;i--) {
        // left stars
        for(int j=1;j<=i;j++) {
            cout<<"*";
        }
        // spaces
        for(int j=1;j<=2*(n-i);j++) {
            cout<<" ";
        }
        // right stars
        for(int j=1;j<=i;j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

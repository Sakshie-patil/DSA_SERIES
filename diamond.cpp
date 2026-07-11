#include<iostream>
using namespace std;

int main() {
    int n;

    cout<<"enter number: ";
    cin >> n;
    
    // staright pyramid
     for(int i=1;i<=n;i++) {
        // spaces
        for(int j=1;j<=n-i;j++) {
            cout<<"  ";
        }
        // stars
        for(int j=1;j<=2*i-1;j++) {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

// inverted pyramid
    for(int i=2; i<=n;i++) {
          int num = 1;
    
          // spaces
          for(int j=1;j<=i-1;j++) {
              cout<<"  ";
          }
        // what to print
        for(int j=2*(n-i)+1;j>=1;j--) {
            cout<<"*"<<" ";
            // num++;
        }
          cout<<endl;
        }
}
    
    
    
    
    
    
    
    
    

#include<iostream>
using namespace std;

// pahile try to print nromal diamond pattern then add 2 conditions for boundries

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
            
            // add condition ki tumhala konta position vr star print krycha ahe (first star on that line is 1st position). 
            if(j==1 || j==2*i-1) cout<<"*"<<" ";
            else cout<<"  ";
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
            if(j==1 || j==2*(n-i)+1) cout<<"*"<<" ";
            else cout<<"  ";
        }
          cout<<endl;
        }
}
    
    
    
    

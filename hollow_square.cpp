#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter number: ";
    cin>>n;
    
        // APPROACH 1
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(i==1 || i == n || j==1 || j==n) cout<<"*"<<" ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    
    // APPROACH 2
    // for(int i=1;i<=n;i++) {
    //     if(i==1 || i==n) {
    //         for(int j=1;j<=n;j++) {
    //             cout<<"*"<<" ";
    //         }
    //     }
    //     else {
    //         for(int j=1;j<=n;j++) {
    //             // stars
    //             if(j==1 || j==n) cout<<"*"<<" ";
    //             else cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
    
}

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter number: ";
    cin>>n;
    int num;
    
      // straight pyramid
    for(int i=1;i<=n;i++) {
        // spaces
        for(int j=1;j<=n-i;j++) {
            cout<<"  ";
        }
        
        // stars
        for(int j=1;j<=2*i-1;j++) {
            if(j==1 || j==2*i-1 || i==n) cout<<"*"<<" ";
            else cout<<"  ";
        }
        cout<<endl;
    }

}

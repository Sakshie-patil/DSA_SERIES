#include<iostream>
using namespace std;

//     1
//   121
//   12321
//  1234321
// 123454321

int main() {
    int n;
    cout<<"enter number: ";
    cin >> n;
   
   for(int i=1;i<=n;i++) {
       // spaces
       for(int j=n-i;j>=1;j--) {
           cout<<"  ";
       }
       
       // increasing numbers
       for(int j=1;j<=i;j++) {
           cout<<j<<" ";
       }
       
       // decreasing numbers
       for(int j=i-1;j>=1;j--) {
           cout<<j<<" ";
       }
       cout<<endl;
   }
}   

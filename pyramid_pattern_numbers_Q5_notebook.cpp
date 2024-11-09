// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int n=4;
   for(int i=0;i<n;i++) {
       //spaces
       for(int j=0;j<n-i-1;j++) {
           cout<<" ";
       }
       int num=1;
       for(int k=0;k<i+1;k++) {
           cout<<num;
           num++;
       }
        num=num-2;
       for(int k=0;k<i;k++) {
           cout<<num;
           num--;
       }
       cout<<endl;
   }
  
   return 0;
   }
    

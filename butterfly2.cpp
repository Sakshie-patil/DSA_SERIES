//sakshi pat
#include <iostream>
using namespace std;
int main() {
  int n=4;

  //upper half
  for(int i=0;i<n;i++) {
      //nums set 1
      for(int j=0;j<i+1;j++) {
          cout<<"*";
      }
      
    //spaces
    for(int k=0;k<2*(n-i-1);k++) {
        cout<<" ";
    }
    //nums set 2
    for(int j=0;j<i+1;j++) {
        cout<<"*";
    }
     cout<<endl;
  }
  
  //lower half
  n=3;
  for(int i=0;i<n;i++) {
      //nums set 1
      for(int j=0;j<n-i;j++) {
          cout<<"*";
      }
      //spaces
      for(int k=0;k<2*i+2;k++) {
          cout<<" ";
      }
      //nums set 2
      for(int j=0;j<n-i;j++) {
          cout<<"*";
      }
      cout<<endl;
  }
  
   return 0;
   }

#include <iostream>
#include <utility>
using namespace std;

pair<int , int> linearSearch(int matrix[3][3], int row, int col, int target) {
    
    for(int i=0;i<row;i++) {
       for(int j=0;j<col;j++) {
           if(matrix[i][j]==target) {
              return {i,j};
           }
       }
   }
  return {-1,-1};
}

int main() {
   int matrix[3][3] = {{1,2,3} , {4,5,6} , {7,8,9} };
   int row=3;
   int col = 3;
   int target=3;
   pair <int , int> p=linearSearch(matrix , row ,col , target);
   
   if(p.first!= -1 && p.second!=-1) {
       cout<<"element found at index:"<<p.first<<" " <<p.second;
   }
   else {
       cout<<"element does not found";
   }
}

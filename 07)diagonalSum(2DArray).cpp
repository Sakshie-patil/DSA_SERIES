#include <iostream>
#include <climits>
using namespace std;

int diagonalSum(int matrix[4][4] , int n) {
      int sum=0;
    for(int i=0;i<n;i++) {
        sum = sum + matrix[i][i];                //adds both primary diagonal elements to the sum
         if(i != n-i-1) {                       //dosent add to the sum when primary diagoanal element and secondary elements are equal
            sum = sum + matrix[i][n-i-1];       // adds secondary elements to the sum
        }
        }
    return sum;
}  
    
int main() {
   int matrix[4][4] = {{1,2,3,4} , {5,6,7,8} , {9,10,11,12}, {13,14,15,16}};
   int n=4;
   cout<<diagonalSum(matrix,n);
   
}

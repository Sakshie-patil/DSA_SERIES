#include <iostream>
#include <climits>
using namespace std;

int getMaxSum(int matrix[3][3], int row, int col) {
    int maxSum= INT_MIN;
    
    for(int i=0;i<row;i++) {
        int currSum=0;
        for(int j=0;j<col;j++) {
            currSum = currSum + matrix[i][j];
        }
        maxSum = max(maxSum , currSum);
    }
   return maxSum;
}

int main() {
   int matrix[3][3] = {{1,2,3} , {4,5,6} , {7,8,9} };
   int row=3;
   int col = 3;
    cout<<getMaxSum(matrix, row, col);
}

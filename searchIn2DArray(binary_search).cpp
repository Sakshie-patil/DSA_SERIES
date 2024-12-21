#include <iostream>
using namespace std;

// Helper function: Binary search within a row
bool rowBinarySearch(int matrix[][4], int midRow, int target, int n) {
    int st = 0;
    int end = n - 1;

    while (end >= st) {
        int mid = st + (end - st) / 2;
        if (target == matrix[midRow][mid]) {
            return true;
        } else if (target > matrix[midRow][mid]) {
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return false;
}

// Main binary search function across rows
bool binarySearch(int matrix[][4], int target, int m, int n) {
    int stRow = 0;
    int endRow = m - 1;

    while (endRow >= stRow) {
        int midRow = stRow + (endRow - stRow) / 2;

        // Check if the target lies in the current row range
        if (target >= matrix[midRow][0] && target <= matrix[midRow][n - 1]) {
            return rowBinarySearch(matrix, midRow, target, n);
        } else if (target > matrix[midRow][n - 1]) {
            stRow = midRow + 1; // Move to the next row
        } else {
            endRow = midRow - 1; // Move to the previous row
        }
    }
    return false; // Target not found
}

int main() {
    // Fixed-size 2D array
    int matrix[3][4] = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int target = 3;

    int m = 3; // Number of rows
    int n = 4; // Number of columns

    // Perform search
    cout << (binarySearch(matrix, target, m, n) ? "Found" : "Not Found") << endl;

    return 0;
}

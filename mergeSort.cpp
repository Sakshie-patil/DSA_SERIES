#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int st, int mid, int end) {
    vector<int> temp;
    int i = st, j = mid + 1;

    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) temp.push_back(arr[i++]);
        else temp.push_back(arr[j++]);
    }
    while (i <= mid) temp.push_back(arr[i++]);
    while (j <= end) temp.push_back(arr[j++]);

    for (int k = 0; k < temp.size(); k++) {
        arr[st + k] = temp[k];
    }
}

void mergeSortIterative(vector<int>& arr) {
    int n = arr.size();

    // Current size of subarrays to merge (1, 2, 4, 8...)
    for (int size = 1; size < n; size *= 2) {
        // Pick starting index of left subarray
        for (int left = 0; left < n - size; left += 2 * size) {
            int mid = left + size - 1;
            int right = min(left + 2 * size - 1, n - 1);

            merge(arr, left, mid, right);
        }
    }
}

int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    mergeSortIterative(arr);

    cout << "Sorted Array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;
}

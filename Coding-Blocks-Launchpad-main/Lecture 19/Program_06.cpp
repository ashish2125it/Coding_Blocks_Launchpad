#include <iostream>
using namespace std;

int main() {
    int n, m;

    // Input number of rows and columns
    cout << "Enter number of rows (n): ";
    cin >> n;
    cout << "Enter number of columns (m): ";
    cin >> m;

    int arr[n][m];

    // Input the 2D array
    cout << "Enter elements of the 2D array:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }

    int maxSum = INT_MIN;  // Initialize with a very small value
    int maxRowIndex = -1;  // To store index of row with max sum

    // Find row with maximum sum
    for (int i = 0; i < n; ++i) {
        int rowSum = 0;
        for (int j = 0; j < m; ++j) {
            rowSum += arr[i][j];  // Add all elements in the row
        }

        // Update max if this row has greater sum
        if (rowSum > maxSum) {
            maxSum = rowSum;
            maxRowIndex = i;
        }
    }

    // Output result
    cout << "Row " << maxRowIndex << " has the maximum sum: " << maxSum << endl;

    return 0;
}

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

    // Compute and print column-wise sum
    cout << "Column-wise sums:" << endl;
    for (int j = 0; j < m; ++j) {
        int colSum = 0;
        for (int i = 0; i < n; ++i) {
            colSum += arr[i][j];  // Add each element in the column
        }
        cout << "Sum of column " << j << ": " << colSum << endl;
    }

    return 0;
}

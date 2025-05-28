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

    // Compute and print row-wise sum
    cout << "Row-wise sums:" << endl;
    for (int i = 0; i < n; ++i) {
        int rowSum = 0;
        for (int j = 0; j < m; ++j) {
            rowSum += arr[i][j];  // Add each element in the row
        }
        cout << "Sum of row " << i << ": " << rowSum << endl;
    }

    return 0;
}

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

    // Taking input of 2D array elements
    cout << "Enter elements of the 2D array:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }

    // Calculate sum of all elements
    int totalSum = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            totalSum += arr[i][j];  // Add each element to totalSum
        }
    }

    // Output the result
    cout << "Sum of all elements: " << totalSum << endl;

    return 0;
}

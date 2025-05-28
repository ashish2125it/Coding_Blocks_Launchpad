#include <iostream>
using namespace std;

int main() {
    int n, m;

    // Input number of rows and columns
    cout << "Enter number of rows (n): ";
    cin >> n;
    cout << "Enter number of columns (m): ";
    cin >> m;

    // Declare 2D array
    int arr[n][m];

    // Input elements row-wise
    cout << "Enter elements row-wise (" << n << "x" << m << "):" << endl;
    for (int i = 0; i < n; ++i) {             // Loop through each row
        for (int j = 0; j < m; ++j) {         // Loop through each column in the row
            cin >> arr[i][j];                // Take input for each element
        }
    }

    // Print the 2D array
    cout << "The 2D array is:" << endl;
    for (int i = 0; i < n; ++i) {             // Loop through each row
        for (int j = 0; j < m; ++j) {         // Loop through each column in the row
            cout << arr[i][j] << " ";        // Print each element followed by space
        }
        cout << endl;                         // New line after each row
    }

    return 0;
}

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

    // Input key to search
    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    bool found = false;

    // Search for the key
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (arr[i][j] == key) {
                cout << "Key found at position: (" << i << ", " << j << ")" << endl;
                found = true;
            }
        }
    }

    if (!found) {
        cout << "Key not found in the array." << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {

    // Input:
// Enter number of elements in sorted array: 6
// Enter 6 sorted elements:
// 2 4 6 8 10 12
// Enter key to search: 8

// Output:
// Key is present in the array.

    int n, key;

    // Input size of array
    cout << "Enter number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the key to search
    cout << "Enter key to search: ";
    cin >> key;

    // Brute force: Linear Search
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Key is present in the array.\n";
    } else {
        cout << "Key is NOT present in the array.\n";
    }

    return 0;
}

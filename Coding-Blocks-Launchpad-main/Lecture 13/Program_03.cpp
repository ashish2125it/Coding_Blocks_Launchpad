// 2 Sum Problem - Brute Force Approach to COUNT valid pairs
// Count number of pairs (i, j) where i < j and arr[i] + arr[j] == target

#include <iostream>
using namespace std;

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input array
    }

    cout << "Enter target sum: ";
    cin >> target;

    int count = 0; // To store number of valid pairs

    // Brute-force: check all pairs (i, j) with i < j
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                count++; // Valid pair found
            }
        }
    }

    cout << "Total number of valid pairs: " << count << endl;

    return 0;
}

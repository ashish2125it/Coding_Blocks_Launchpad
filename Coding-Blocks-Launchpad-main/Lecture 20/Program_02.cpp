#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "\nAll subarrays:\n";

    // i is the starting index
    for (int i = 0; i < n; ++i) {
        // j is the ending index
        for (int j = i; j < n; ++j) {
            // Print subarray from index i to j
            cout << "[ ";
            for (int k = i; k <= j; ++k) {
                cout << arr[k] << " ";
            }
            cout << "]\n";
        }
    }

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cout << "Enter size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the target sum (k): ";
    cin >> k;

    cout << "\nSubarrays with sum " << k << ":\n";

    // Try every subarray and print if sum is k
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = i; j < n; ++j) {
            sum += arr[j];
            if (sum == k) {
                cout << "[ ";
                for (int idx = i; idx <= j; ++idx) {
                    cout << arr[idx] << " ";
                }
                cout << "]\n";
            }
        }
    }

    return 0;
}

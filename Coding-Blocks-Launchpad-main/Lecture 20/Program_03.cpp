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

    int count = 0;

    // Brute force: Try every subarray
    for (int i = 0; i < n; ++i) {         // start index
        for (int j = i; j < n; ++j) {     // end index
            int sum = 0;
            for (int l = i; l <= j; ++l) { // calculate sum of subarray arr[i...j]
                sum += arr[l];
            }
            if (sum == k) {
                count++;
            }
        }
    }

    cout << "Number of subarrays with sum " << k << " is: " << count << endl;

    return 0;
}

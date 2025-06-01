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

    // Loop through all subarrays with cumulative sum
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = i; j < n; ++j) {
            sum += arr[j];  // build the sum from i to j
            if (sum == k) {
                count++;
            }
        }
    }

    cout << "Number of subarrays with sum " << k << " is: " << count << endl;

    return 0;
}

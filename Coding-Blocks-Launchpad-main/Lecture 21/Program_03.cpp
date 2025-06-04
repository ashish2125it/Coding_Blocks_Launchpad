#include <iostream>
#include <vector>
using namespace std;

/*
    Problem Statement:
    ------------------
    Given an array of integers and an integer k, find the number of subarrays 
    that contain exactly k odd numbers.

    A subarray is a contiguous part of the array.

    Constraints:
    - 1 <= n <= 1000
    - -10^4 <= arr[i] <= 10^4
    - 0 <= k <= n

    Example:
    Input: arr = {1, 1, 2, 1, 1}, k = 3

    Valid subarrays:
    [1,1,2,1], [1,2,1,1], [1,1,2,1,1]  → All contain exactly 3 odd numbers

    Output: 3
*/

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter k (number of odd elements required): ";
    cin >> k;

    int count = 0;

    // Brute-force O(N^2) approach
    for (int i = 0; i < n; i++) {
        int oddCount = 0;
        for (int j = i; j < n; j++) {
            if (arr[j] % 2 != 0) {
                oddCount++;
            }

            if (oddCount == k) {
                count++;
            } else if (oddCount > k) {
                break; // No need to go further; too many odds
            }
        }
    }

    cout << "Number of subarrays with exactly " << k << " odd numbers: " << count << endl;

    return 0;
}

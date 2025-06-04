#include <iostream>
#include <vector>
using namespace std;

/*
    Problem Statement:
    -------------------
    Given an array of integers, count the number of subarrays whose sum is odd
    and the number of subarrays whose sum is even.

    A subarray is a contiguous part of the array.

    Constraints:
    - 1 <= n <= 10^3 (for O(N^2) solution)
    - -10^4 <= arr[i] <= 10^4

    Example:
    Input: arr = {1, 2, 3}
    Subarrays:
    [1] -> odd
    [1,2] -> odd
    [1,2,3] -> even
    [2] -> even
    [2,3] -> odd
    [3] -> odd

    Output:
    Odd subarrays = 4
    Even subarrays = 2
*/

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int oddCount = 0, evenCount = 0;

    // Generate all subarrays using O(N^2)
    for (int i = 0; i < n; i++) {
        int sum = 0; // Reset sum for each new starting index i
        for (int j = i; j < n; j++) {
            sum += arr[j]; // Add current element to sum

            // Check if current subarray sum is odd or even
            if (sum % 2 == 0)
                evenCount++;
            else
                oddCount++;
        }
    }

    cout << "Number of subarrays with odd sum: " << oddCount << endl;
    cout << "Number of subarrays with even sum: " << evenCount << endl;

    return 0;
}

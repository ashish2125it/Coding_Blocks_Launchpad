#include <iostream>
#include <vector>
#include <climits>
using namespace std;

/*
    Problem Statement:
    ------------------
    Given an array of positive integers and a target sum, 
    find the minimal length of a contiguous subarray 
    of which the sum is greater than or equal to the target value.
    If no such subarray exists, return 0.

    Constraints:
    - 1 <= n <= 1000  (for brute-force)
    - 1 <= arr[i] <= 10^4
    - 1 <= target <= 10^9

    Example:
    Input: arr = [2, 3, 1, 2, 4, 3], target = 7
    Output: 2
    Explanation: The subarray [4, 3] has the minimum length with sum >= 7.
*/

int main() {
    int n, target;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    int minLength = INT_MAX;

    // Brute-force O(N^2)
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            int length = j - i + 1;

            if (sum >= target) {
                minLength = min(minLength, length);
                break; // No need to extend this subarray further
            }
        }
    }

    if (minLength == INT_MAX)
        cout << "No subarray found with sum >= " << target << endl;
    else
        cout << "Minimum length of subarray with sum >= " << target << " is: " << minLength << endl;

    return 0;
}

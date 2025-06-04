#include <iostream>
#include <vector>
using namespace std;

int main() {

    /*
    Given an array of integers and an integer k, 
    find the total number of subarrays whose sum is divisible by k.

    Brute Force Approach:
    ---------------------
    - Iterate over all possible subarrays.
    - Compute the sum of each subarray.
    - If sum % k == 0, increment count.

    Time Complexity: O(N^2)

    Example:
    Input: arr = [4, 5, 0, -2, -3, 1], k = 5
    Output: 7
*/


    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter value of k: ";
    cin >> k;

    int count = 0;

    // Brute-force approach: Check every subarray
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];

            if (sum % k == 0) {
                count++;
            }
        }
    }

    cout << "Number of subarrays with sum divisible by " << k << ": " << count << endl;

    return 0;
}

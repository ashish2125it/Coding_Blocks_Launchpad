#include <iostream>
#include <vector>
using namespace std;

/*
    Problem Statement:
    -------------------
    Given an array of integers, return the sum of all subarrays that have an odd length.

    A subarray is a contiguous part of the array, and its length is the number of elements it contains.

    Constraints:
    - 1 <= arr.length <= 1000
    - -1000 <= arr[i] <= 1000

    Example:
    Input: arr = {1, 4, 2, 5, 3}
    Odd length subarrays are:
    [1], [4], [2], [5], [3],         -> len = 1
    [1,4,2], [4,2,5], [2,5,3],       -> len = 3
    [1,4,2,5,3]                      -> len = 5

    Sum = 1+4+2+5+3 + (1+4+2)+(4+2+5)+(2+5+3) + (1+4+2+5+3) = 58
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

    int totalSum = 0;

    // Brute-force O(N^2) approach
    for (int i = 0; i < n; i++) {
        int sum = 0; // reset sum for subarray starting from i
        for (int j = i; j < n; j++) {
            sum += arr[j];

            int length = j - i + 1;
            if (length % 2 == 1) {
                totalSum += sum;
            }
        }
    }

    cout << "Sum of all odd-length subarrays: " << totalSum << endl;

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

/*
    Problem Statement:
    ------------------
    Given a binary array (only 0s and 1s), 
    find the number of subarrays with equal number of 0s and 1s.

    Approach:
    ---------
    - Brute-force O(N^2)
    - For every subarray, count number of 0s and 1s
    - If they are equal, increase the answer

    Example:
    Input: arr = [0, 1, 0, 1, 1]
    Output: 4
    Valid subarrays: [0,1], [1,0], [0,1,1,0], [0,1,0,1]
*/

int main() {
    int n;
    cout << "Enter size of binary array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter binary array (0s and 1s):\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;

    // O(N^2) brute-force approach
    for (int i = 0; i < n; i++) {
        int zeros = 0, ones = 0;

        for (int j = i; j < n; j++) {
            if (arr[j] == 0)
                zeros++;
            else
                ones++;

            if (zeros == ones)
                count++;
        }
    }

    cout << "Number of subarrays with equal 0s and 1s: " << count << endl;

    return 0;
}

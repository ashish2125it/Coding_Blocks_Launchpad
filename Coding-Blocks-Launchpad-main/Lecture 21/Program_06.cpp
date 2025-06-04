#include <iostream>
#include <vector>
using namespace std;

int main() {

//     Given a binary array (containing only 0s and 1s), find the length of the longest
// subarray with equal number of 0s and 1s.

// Example:
// Input:  arr = [0, 1, 0, 1, 1, 1, 0]
// Output: 6
// Explanation: The subarray [0, 1, 0, 1, 1, 1, 0] → subarray [0, 1, 0, 1, 1, 1] has
// more 1s, but [0,1,0,1,1,1,0] has 3 zeros and 3 ones → max length = 6

    int n;
    cout << "Enter size of binary array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter binary array (0s and 1s):\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxLength = 0;

    // Brute-force O(N^2)
    for (int i = 0; i < n; i++) {
        int zeros = 0, ones = 0;
        for (int j = i; j < n; j++) {
            if (arr[j] == 0)
                zeros++;
            else
                ones++;

            if (zeros == ones) {
                int len = j - i + 1;
                maxLength = max(maxLength, len);
            }
        }
    }

    cout << "Maximum length of subarray with equal 0s and 1s: " << maxLength << endl;

    return 0;
}

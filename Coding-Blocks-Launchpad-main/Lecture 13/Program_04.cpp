// 2 Sum Problem - Optimized approach using Sorting + Two Pointers
// Counts number of valid pairs where arr[i] + arr[j] == target

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input array elements
    }

    cout << "Enter target sum: ";
    cin >> target;

    // Step 1: Sort the array

    sort(arr, arr+n);

    int left = 0, right = n - 1;
    int count = 0;

    // Step 2: Use two-pointer approach
    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
         left++;
         right--;
         count++;
        }
        else if (sum < target) {
            left++; // Move to larger values
        }
        else {
            right--; // Move to smaller values
        }
    }

    cout << "Total number of valid pairs: " << count << endl;

    return 0;
}

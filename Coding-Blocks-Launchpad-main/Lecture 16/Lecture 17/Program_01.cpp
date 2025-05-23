#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    /*
    Definition of Lower Bound:
    Lower bound of a target value in a sorted array is the index of the
    first element that is **not less than** (i.e., greater than or equal to) the target.
    If all elements are less than the target, the lower bound is the size of the array (no valid position).
    */

    int n, target;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];  // Declare array of size n

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target value: ";
    cin >> target;

    // Sort array for binary search
    sort(arr, arr + n);

    int low = 0, high = n - 1;
    int ans = n;  // Default answer if no element >= target found

    // Binary search with high = n-1
    while (low <= high) {
        int mid = (low + high)/2;

        if (arr[mid] >= target) {
            ans = mid;      // Possible answer found
            high = mid - 1; // Look for a smaller index on left side
        } else {
            low = mid + 1;  // Move right if arr[mid] < target
        }
    }

    cout << "Lower bound index: " << ans << endl;

    if (ans < n) {
        cout << "Value at lower bound: " << arr[ans] << endl;
    } else {
        cout << "No element >= " << target << " found in array." << endl;
    }

    return 0;
}

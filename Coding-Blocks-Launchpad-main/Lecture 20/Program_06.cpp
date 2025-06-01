#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int count = 0;

    // Try every subarray
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            bool allEqual = true;
            for (int k = i + 1; k <= j; ++k) {
                if (arr[k] != arr[k - 1]) {
                    allEqual = false;
                    break;
                }
            }
            if (allEqual) {
                count++;
            }
        }
    }

    cout << "Number of subarrays with all equal elements: " << count << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    /*
    Problem Statement:
    Find and print all duplicate elements in the array using brute force.
    Inner loop starts from i+1 to avoid redundant comparisons.

    Approach:
    - For each element at index i,
      compare with elements from i+1 to end.
    - If duplicate found and not already printed, print it.
    */

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Duplicate elements are: ";

    for (int i = 0; i < n; i++) {
        bool isDuplicateAlreadyPrinted = false;

        // Check if arr[i] was already printed as duplicate
        for (int k = 0; k < i; k++) {
            if (arr[k] == arr[i]) {
                isDuplicateAlreadyPrinted = true;
                break;
            }
        }

        if (isDuplicateAlreadyPrinted) continue;

        // Check duplicates from i+1 to end
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }

    cout << endl;

    return 0;
}

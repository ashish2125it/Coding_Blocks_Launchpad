/*
Problem Statement:
-------------------
Given a **sorted array** of integers and a key,
find the **last index** where the key appears using Binary Search.

Example:
Input:
arr = {2, 4, 4, 4, 6, 8, 10}
key = 4

Output:
Last Occurrence = 3
*/

#include <iostream>
using namespace std;

int main() {
    int n, key;

    // Input: size of array
    cout << "Enter number of elements in the sorted array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " sorted elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input: key to search
    cout << "Enter key to find last occurrence: ";
    cin >> key;

    int start = 0, end = n - 1;
    int lastOccurrence = -1;

    // Binary Search
    while (start <= end) {
        int mid = (start + end)/2;

        // If key is found, store index and search in right half
        if (arr[mid] == key) {
            lastOccurrence = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    // Output the result
    if (lastOccurrence == -1) {
        cout << "Key not found in the array.\n";
    } else {
        cout << "Last Occurrence = " << lastOccurrence << endl;
    }

    return 0;
}

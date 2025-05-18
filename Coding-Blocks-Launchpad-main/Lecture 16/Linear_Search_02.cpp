/*
Problem Statement:
-------------------
Given an array of integers (not necessarily sorted) and a key,
find the **first** and **last** index where the key appears.

Use brute force (linear search) to solve this.

Example:
Input:
arr = {5, 2, 3, 2, 4, 2, 6}
key = 2

Output:
First Occurrence = 1
Last Occurrence = 5
*/

#include <iostream>
using namespace std;

int main() {
    int n, key;

    // Input: size of array
    cout << "Enter number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input: key to search
    cout << "Enter key to find first and last occurrence: ";
    cin >> key;

    int first = -1, last = -1;

    // Brute Force: Linear Search from start to end
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            if (first == -1) {
                first = i; // set first time we see key
            }
            last = i; // update last every time we see key
        }
    }

    // Output the result
    if (first == -1) {
        cout << "Key not found in the array.\n";
    } else {
        cout << "First Occurrence = " << first << endl;
        cout << "Last Occurrence = " << last << endl;
    }

    return 0;
}

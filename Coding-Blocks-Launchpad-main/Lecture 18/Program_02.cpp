#include <iostream>
#include <map> // For using map
using namespace std;

/*
Problem Statement:
Given an array of size n, find the element with the maximum frequency
(i.e., the element that appears the most times in the array).

Input:
- First line contains an integer n, the size of the array.
- Second line contains n space-separated integers, the elements of the array.

Output:
- Print the element with the maximum frequency.
- Print its frequency on the next line.

Example:
Input:
8
2 3 2 5 2 3 5 5

Output:
Element with maximum frequency: 2
Frequency: 3
*/

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n]; // Declare array of size n
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Take user input
    }

    map<int, int> freqMap; // Map to store frequency of each element

    // Count frequencies
    for (int i = 0; i < n; i++) {
        freqMap[arr[i]]++;
    }

    int maxFreq = 0;
    int maxFreqElement = -1;

    // Find the element with the maximum frequency
    for (auto it : freqMap) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            maxFreqElement = it.first;
        }
    }

    cout << "Element with maximum frequency: " << maxFreqElement << endl;
    cout << "Frequency: " << maxFreq << endl;

    return 0;
}

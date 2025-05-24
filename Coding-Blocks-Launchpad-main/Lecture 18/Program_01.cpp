#include <iostream>
#include <map> // Using ordered map
using namespace std;

/*
Problem Statement:
Given an array of size n, find the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times.
It is guaranteed that a majority element always exists.
*/

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n]; // Declare fixed-size array

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Read input into array
    }

    map<int, int> freqMap; // Map to store frequency of each element

    // Count frequencies
    for (int i = 0; i < n; i++) {
        freqMap[arr[i]]++;
    }

    // Find majority element
    for (auto it : freqMap) {
        if (it.second > n / 2) {
            cout << "Majority Element: " << it.first << endl;
            return 0;
        }
    }

    // This case should not occur as per the problem
    cout << "No Majority Element Found." << endl;
    return 0;
}

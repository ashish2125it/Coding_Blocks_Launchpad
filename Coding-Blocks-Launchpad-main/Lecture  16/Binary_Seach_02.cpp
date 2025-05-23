/*
Problem Statement:
-------------------
Given a **sorted array** of integers and a key,
find the **first index** where the key appears using Binary Search.

Example:
Input:
arr = {2, 4, 4, 4, 6, 8, 10}
key = 4

Output:
First Occurrence = 1
*/

#include <iostream>         
using namespace std;         

int main() {
    int n, key;              // Declare variables for array size and the key to search

    // Input: size of the array
    cout << "Enter number of elements in the sorted array: ";
    cin >> n;                // Read the size of the array from user

    int arr[n];              // Declare an array of size n

    // Input: elements of the sorted array
    cout << "Enter " << n << " sorted elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];       // Read each element into the array
    }

    // Input: the key to search for
    cout << "Enter key to find first occurrence: ";
    cin >> key;              // Read the key from the user

    int start = 0;           // Initialize start pointer to beginning of array
    int end = n - 1;         // Initialize end pointer to end of array
    int firstOccurrence = -1; // Variable to store index of first occurrence (default -1 if not found)

    // Binary Search loop
    while (start <= end) {                     
        int mid = (start + end) / 2;           // Calculate mid index

        if (arr[mid] == key) {                 // If key is found at mid
            firstOccurrence = mid;             // Store current index as potential first occurrence
            end = mid - 1;                     // Move to left half to find earlier occurrence
        }
        else if (arr[mid] < key) {             // If key is greater than mid element
            start = mid + 1;                   // Move to right half
        }
        else {                                 // If key is smaller than mid element
            end = mid - 1;                     // Move to left half
        }
    }

    // Output the result based on whether key was found
    if (firstOccurrence == -1) {               // If firstOccurrence is still -1, key not found
        cout << "Key not found in the array.\n";
    } else {
        cout << "First Occurrence = " << firstOccurrence << endl; // Print first occurrence
    }
   
    return 0;                                
}

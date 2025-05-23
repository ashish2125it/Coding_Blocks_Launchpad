#include <iostream>          
using namespace std;         

int main() {

    // Sample Input:
    // Enter number of elements in sorted array: 6
    // Enter 6 sorted elements:
    // 2 4 6 8 10 12
    // Enter key to search: 8

    // Sample Output:
    // Key is present in the array.

    int n, key; // Declare variables for the number of elements and the key to search

    // Ask user to input the size of the array
    cout << "Enter number of elements in sorted array: ";
    cin >> n; // Take array size as input

    int arr[n]; // Declare an array of size n

    // Prompt user to enter the sorted array elements
    cout << "Enter " << n << " sorted elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input each element of the array
    }

    // Ask user to input the key to search for
    cout << "Enter key to search: ";
    cin >> key; // Input the key

    int start = 0;         // Initialize start pointer to the beginning of array
    int end = n - 1;       // Initialize end pointer to the end of array
    bool found = false;    // Boolean flag to check if key is found

    // Binary Search loop
    while (start <= end) {
        int mid = (start + end) / 2; // Calculate the middle index

        if (arr[mid] == key) {       // If key is found at mid
            found = true;            // Set found flag to true
            break;                   // Exit the loop
        } else if (arr[mid] < key) { // If key is greater than mid value
            start = mid + 1;         // Move search to the right half
        } else {                     // If key is less than mid value
            end = mid - 1;           // Move search to the left half
        }
    }

    // Print whether the key was found or not
    if (found) {
        cout << "Key is present in the array.\n";
    } else {
        cout << "Key is NOT present in the array.\n";
    }

    return 0; 
}

// C++ program to check if an array is sorted or not (taking input from user)

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n; // Taking size of array

    int arr[n]; // Declaring array of size n

    // Taking input for array elements
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool sorted = true; // Assume the array is sorted initially

    // Check if array is sorted in non-decreasing order
    for (int i = 1; i < n;i++) {
        int curr_element = arr[i];
        int prev_element = arr[i-1];
        if (prev_element > curr_element) {
            sorted = false; // Found an unsorted pair
            break;
        }
    }

    // Print result
    if (sorted) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}

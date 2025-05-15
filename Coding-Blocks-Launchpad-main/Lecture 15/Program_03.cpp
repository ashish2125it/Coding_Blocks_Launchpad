#include<iostream>
using namespace std;

// Function to print the elements of the array
// Takes the array and its size as parameters
void printArray(int arr[], int size) {
    cout << "Array elements: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;

    // Input size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call the function to print the array
    printArray(arr, n);

    return 0;
}

/*
Input:
Enter the size of the array: 5
Enter 5 elements:
10 20 30 40 50

Output:
Array elements: 10 20 30 40 50
*/

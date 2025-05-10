// 1. Frequency of each element in an array (without using map)
// C++ program using a frequency array

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    int arr[n]; // Input array
    int maxVal = 0; // To find maximum value in the array

    cout << "Enter " << n << " elements (non-negative integers only):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > maxVal) {
            maxVal = arr[i]; // Track maximum value for freq array size
        }
    }

    // Create frequency array of size maxVal + 1
    int freq[maxVal + 1] = {0};

    // Count frequency of each element
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Print frequencies
    cout << "Frequencies of elements:" << endl;
    for (int i = 0; i <= maxVal; i++) {
        if (freq[i] > 0) {
            cout << i << " occurs " << freq[i] << " times" << endl;
        }
    }

    return 0;
}

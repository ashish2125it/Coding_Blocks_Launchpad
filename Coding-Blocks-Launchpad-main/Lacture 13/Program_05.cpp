// Majority Element using Frequency Array 
// Finds the element that occurs more than n/2 times

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    int maxVal = 0;

    cout << "Enter " << n << " elements (non-negative integers only):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > maxVal) {
            maxVal = arr[i]; // Track max to size the freq array
        }
    }

    // Create frequency array
    int freq[maxVal + 1] = {0};

    // Count frequency of each element
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Find element with frequency > n/2
    bool found = false;
    for (int i = 0; i <= maxVal; i++) {
        if (freq[i] > n / 2) {
            cout << "Majority element is: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No majority element found." << endl;
    }

    return 0;
}

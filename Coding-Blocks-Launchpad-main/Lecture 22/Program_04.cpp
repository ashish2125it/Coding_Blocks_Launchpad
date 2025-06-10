#include <iostream>
#include <vector>
using namespace std;

// Recursive function to calculate sum from the end of the vector
int sumFromEnd(const vector<int>& arr, int index) {
    // Base case: if index is less than 0, stop recursion
    if (index < 0)
        return 0;

    // Recursive case: add current element + sum of previous elements
    return arr[index] + sumFromEnd(arr, index - 1);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Start recursion from the last index (n - 1)
    int totalSum = sumFromEnd(arr, n - 1);
    cout << "Sum of elements from the end is: " << totalSum << endl;

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

// Recursive function to calculate product of elements from end
int multiplyFromEnd(const vector<int>& arr, int index) {
    // Base case: if index < 0, return 1 (identity of multiplication)
    if (index < 0)
        return 1;

    // Recursive step: multiply current element with the result of the rest
    return arr[index] * multiplyFromEnd(arr, index - 1);
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Start recursion from the last index
    int product = multiplyFromEnd(arr, n - 1);
    cout << "Product of all elements is: " << product << endl;

    return 0;
}

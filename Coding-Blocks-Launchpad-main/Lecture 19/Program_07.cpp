#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare an empty vector of integers
    vector<int> v;

    // Taking input into vector (say n elements)
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);  // Add element to vector
    }

    // Print size of vector
    cout << "Size of vector: " << v.size() << endl;

    // Print elements of vector
    cout << "Elements in vector: ";
    for (int i = 0; i < (int)v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Push new element
    v.push_back(100);
    cout << "After push_back(100), elements: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // Pop last element
    v.pop_back();
    cout << "After pop_back(), elements: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    /*
    Problem Statement:
    Given an array where every element appears twice except for one unique element,
    find that unique element using XOR operation.

    Explanation:
    - XOR of a number with itself is 0.
    - XOR of a number with 0 is the number itself.
    - By XOR-ing all elements of the array, all duplicates cancel out (become 0),
      leaving only the unique element.
    */

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements (where every element except one appears twice):\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int unique = 0;
    // XOR all elements; duplicates cancel out, leaving the unique element
    for (int i = 0; i < n; i++) {
        unique = unique ^ arr[i];
    }

    cout << "The unique element is: " << unique << endl;

    return 0;
}

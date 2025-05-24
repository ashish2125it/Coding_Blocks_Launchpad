#include <iostream>
#include <set>
using namespace std;

/*
Problem Statement:
Given an array and an element, check if the element exists in the array.

Input:
- First line contains integer n, the size of the array.
- Second line contains n space-separated integers, the elements of the array.
- Third line contains the integer x to be searched in the array.

Output:
- Print "Element found" if x exists in the array.
- Otherwise, print "Element not found".

Example:
Input:
5
1 4 3 7 9
3

Output:
Element found
*/

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    set<int> elements;
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        elements.insert(num);
    }

    int x;
    cout << "Enter element to search: ";
    cin >> x;

    // Check if x exists in the set
    if (elements.find(x) != elements.end()) {
        cout << "Element found" << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}

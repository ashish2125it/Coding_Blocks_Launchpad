#include <iostream>
#include <map>
using namespace std;

/*
Problem Statement:
Given an array containing n-1 distinct integers in the range from 1 to n,
find the missing number.

Input:
- First line: Integer n (total numbers should be from 1 to n)
- Second line: n-1 space-separated integers from the range 1 to n (one number is missing)

Output:
- Print the missing number

Example:
Input:
5
1 2 4 5

Output:
3
*/

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int arr[n - 1];
    cout << "Enter " << n - 1 << " numbers:" << endl;
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    map<int, bool> presenceMap;

    // Store the presence of numbers
    for (int i = 0; i < n - 1; i++) {
        presenceMap[arr[i]] = true;
    }

    // Check which number is missing
    for (int i = 1; i <= n; i++) {
        if (!presenceMap[i]) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}

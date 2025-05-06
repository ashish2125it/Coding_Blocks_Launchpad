#include<iostream>
using namespace std;

/*
This program prints the nth Fibonacci number.

Fibonacci Series:
Index:     0   1   2   3   4   5   6   7   8  ...
Value:     0   1   1   2   3   5   8  13  21  ...

Example:
Input: 6
Output: 8   // because the 6th Fibonacci number is 8 (0-based indexing)

*/

int main() {
    int n;
    cin >> n;  // Input the position 'n' in the Fibonacci series

    int zero_number = 0;    // 0th Fibonacci number
    int first_number = 1;   // 1st Fibonacci number

    // Handle base cases
    if(n == 0)
        cout << zero_number << " ";
    else if(n == 1)
        cout << first_number << " ";
    else {
        // For n >= 2, compute Fibonacci iteratively
        for(int i = 2; i <= n; i++) {
            int curr_number = zero_number + first_number; // next Fibonacci number
            zero_number = first_number;  // shift window
            first_number = curr_number;

            // Print only the nth Fibonacci number
            if(i == n)
                cout << curr_number << " ";
        }
    }

    return 0;
}

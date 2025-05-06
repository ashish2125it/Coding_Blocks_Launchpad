#include<iostream>
using namespace std;

/*
Pattern for input n = 4:

1
2 3
4 5 6
7 8 9 10

Explanation:
- This pattern prints a triangle where numbers increase left to right.
- Row 1 has 1 number, row 2 has 2 numbers, row 3 has 3 numbers, etc.
*/

int main() {
    int n;
    cin >> n; // Input: number of rows

    int val = 1; // Starting value to print

    // Loop through each row
    for (int i = 1; i <= n; i++) {
        
        // Print 'i' numbers in the i-th row
        for (int j = 1; j <= i; j++) {
            cout << val << " "; // Print current value
            val++;              // Move to next number
        }

        cout << endl; // Move to next line after each row
    }

    return 0;
}

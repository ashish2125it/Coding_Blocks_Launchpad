#include<iostream>
using namespace std;

/*
Pattern for input n = 4:

        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4

Explanation:
- Each row starts with spaces to center-align the pattern.
- Then it prints an increasing sequence starting from the row number.
- After reaching the peak, it prints a decreasing sequence back down.
*/

int main() {
    int n;
    cin >> n; // Input the number of rows

    // Loop through each row
    for(int i = 1; i <= n; i++) {

        // Print leading spaces for alignment
        for(int space = 1; space <= (n - i); space++)
            cout << "  ";

        int val = i;

        // Print increasing numbers starting from i
        for(int j = 1; j <= i; j++) {
            cout << val << " ";
            val++;
        }

        // Adjust val back to the correct value for decreasing part
        val = val - 2;

        // Print decreasing numbers
        for(int j = 1; j < i; j++) {
            cout << val << " ";
            val--;
        }

        // Move to next line after completing the row
        cout << endl;
    }

    return 0;
}

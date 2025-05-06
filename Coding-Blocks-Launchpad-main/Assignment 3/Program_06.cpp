#include <iostream>
using namespace std;

/*
Pattern for input n = 5:

    *****
   *   *
  *   *
 *   *
***** 

Explanation:
- Total rows: n
- Each row starts with (n - i) spaces to shift the pattern to the right.
- Then prints a hollow rectangle:
  - Print '*' when:
    - It is the first or last row (i == 1 or i == n)
    - It is the first or last column (j == 1 or j == n)
  - Else print space
*/

int main() {
    int n;
    cin >> n; // Input the size of the square

    for (int i = 1; i <= n; i++) {
        // Print leading spaces for right alignment
        for (int space = 1; space <= n - i; space++) {
            cout << " ";
        }

        // Print stars and spaces for the hollow square
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "*"; // Border of the square
            } else {
                cout << " "; // Inside space
            }
        }

        cout << endl; // Move to the next line
    }

    return 0;
}

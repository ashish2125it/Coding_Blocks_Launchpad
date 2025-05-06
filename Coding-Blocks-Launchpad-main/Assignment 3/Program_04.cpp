#include<iostream>
using namespace std;

/*
Pattern for input n = 5 (n must be odd):

      * 
   *  *  *  
*  *  *  *  *  
   *  *  *  
      *

Explanation:
- The upper half runs from 1 to (n/2 + 1), increasing stars.
- The lower half runs from 1 to (n/2), decreasing stars.
- Spaces are printed before stars to center-align each row.
*/

int main() {
    int n;
    cin >> n; // Take input (must be odd for symmetry)

    int star = 1;              // Initial number of stars
    int new_n = (n / 2) + 1;   // Middle row index

    // ------------------------
    // Upper Half of the Pattern
    // ------------------------
    for (int i = 1; i <= new_n; i++) {
        // Print leading spaces
        for (int space = 1; space <= (new_n - i); space++)
            cout << "  ";

        // Print stars
        for (int j = 1; j <= star; j++) {
            cout << "* ";
        }

        // Move to next line and increase stars by 2
        cout << endl;
        star += 2;
    }

    // Prepare for lower half
    star -= 4;  // Go back to previous correct star count

    // ------------------------
    // Lower Half of the Pattern
    // ------------------------
    for (int i = 1; i <= (n / 2); i++) {
        // Print leading spaces
        for (int space = 1; space <= i; space++)
            cout << "  ";

        // Print stars
        for (int j = 1; j <= star; j++)
            cout << "* ";

        // Move to next line and decrease stars by 2
        cout << endl;
        star -= 2;
    }

    return 0;
}

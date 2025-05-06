#include <iostream>
using namespace std;

int main() {
    int n;
 
    cin >> n;  // Input for the size of the grid (must be odd)

    // The first part of the pattern (upper part of the diamond)
    for (int i = 0; i < n/2 + 1; i++) {
        // Print left stars
        for (int j = 0; j < n/2 + 1 - i; j++) {
            cout << "* ";  // Print stars from left side
        }
       
        // Print spaces in the middle
        for (int j = 0; j < 2*i - 1; j++) {
            cout << "  ";  // Print spaces (2 for each)
        }
       
        // Print right stars
        for (int j = 0; j < n/2 + 1 - i; j++) {
            // Skip the middle star on the first row
            if (i == 0 && j == n/2) continue; 
            cout << "* ";  // Print stars on the right side
        }
        cout << endl;  // Move to the next row
    }
    
    // The second part of the pattern (lower part of the diamond)
    for (int i = n/2 - 1; i >= 0; i--) {
        // Print left stars
        for (int j = 0; j < n/2 + 1 - i; j++) {
            cout << "* ";  // Print stars from left side
        }

        // Print spaces in the middle
        for (int j = 0; j < 2*i - 1; j++) {
            cout << "  ";  // Print spaces (2 for each)
        }

        // Print right stars
        for (int j = 0; j < n/2 + 1 - i; j++) {
            // Skip the middle star on the last row
            if (i == 0 && j == n/2) continue; 
            cout << "* ";  // Print stars on the right side
        }
        cout << endl;  // Move to the next row
    }

    return 0;  

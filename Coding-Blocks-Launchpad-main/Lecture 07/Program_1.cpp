#include <iostream> // Include the input-output stream library
using namespace std;

int main() {
    // This program prints a right-angled triangle pattern of stars:
    // *
    // * *
    // * * *
    // * * * *

    int n;

    // Ask the user for the number of rows
    cout << "Enter number of rows: ";
    cin >> n; // Read input

    // Outer loop for each row
    for (int i = 1; i <= n; i++) {
        // Inner loop for printing stars in each row
        for (int j = 1; j <= i; j++) {
            cout << "* "; // Print star followed by a space
        }
        cout << endl; // Move to the next line after each row
    }

    return 0; 
}


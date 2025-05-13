#include <iostream>
using namespace std;

int main() {
    // Program to print a descending number pyramid pattern where:
    // - Each row starts with the row number and counts down to 1
    // Example output for 4 rows:
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1

    int n;  // Variable to store number of rows
    
    // Get user input for number of rows
    cout << "Enter number of rows: ";
    cin >> n;

    

    // Outer loop for each row
    for (int row = 1; row <= n; row++) {
        // Inner loop to print numbers in current row
        // Starts from row number and counts down to 1
        for (int num = row; num >= 1; num--) {
            cout << num << " ";  // Print current number with space
        }
        cout << endl;  // New line after each row
    }

    return 0; 
}
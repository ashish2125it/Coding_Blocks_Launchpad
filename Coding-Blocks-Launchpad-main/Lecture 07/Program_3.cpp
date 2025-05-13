#include <iostream>
using namespace std;

int main() {
    // Program to print a sequential number pyramid pattern where:
    // - Each row contains consecutive numbers
    // - First row has 1 number, second row has 2 numbers, etc.
    // Example output for 4 rows:
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10

    int n;          
    int currentNum = 1;  // Variable to track current number to print

    // Get user input for number of rows
    cout << "Enter number of rows: ";
    cin >> n;

   
    // Outer loop for each row
    for (int row = 1; row <= n; row++) {
        // Inner loop to print numbers in current row
        // Number of elements equals the row number
        for (int col = 1; col <= row; col++) {
            cout << currentNum << " ";  // Print current number with space
            currentNum++;               // Increment to next number
        }
        cout << endl;  // New line after each row 
    }

    return 0; 
}
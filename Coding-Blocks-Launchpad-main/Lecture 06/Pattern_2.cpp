#include <iostream>
using namespace std;

int main() 
{
    // Program to print a rectangular number pattern
    // Example output for 4 rows and 4 columns:
    // 1 1 1 1
    // 2 2 2 2 
    // 3 3 3 3 
    // 4 4 4 4 

    // Variable declarations
    int row, column;  // Store user input for rows and columns

    // Get user input for pattern dimensions
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> column;

    // Nested loops to print the pattern
    // Outer loop controls rows (i = current row number)
    for (int i = 1; i <= row; i++) 
    {
        // Inner loop controls columns
        for (int j = 1; j <= column; j++) 
        {
            // Print current row number followed by space
            cout << i << " ";  // Note: Changed from 'row' to 'i' to match example pattern
        }
        // Move to next line after completing a row
        cout << endl;
    }

    return 0;  
}
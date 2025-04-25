#include <iostream>
using namespace std;

int main() 
{
    // Program to print a rectangular pattern of asterisks
    // Example output for 4 rows and 4 columns:
    // * * * *
    // * * * *
    // * * * *
    // * * * *

    // Variable declarations
    int row, column;  // Store user input for rows and columns

    // Get user input for pattern dimensions
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> column;

    // Nested loops to print the pattern
    // Outer loop controls rows
    for (int i = 1; i <= row; i++) 
    {
        // Inner loop controls columns
        for (int j = 1; j <= column; j++) 
        {
            cout << "* ";  // Print asterisk with space
        }
        // Move to next line after completing a row
        cout << endl;
    }

    return 0; 
}
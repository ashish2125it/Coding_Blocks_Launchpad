#include <iostream>
using namespace std;

int main() 
{
    // Program to print a sequential number grid pattern
    // Example output for 3 rows and 4 columns:
    // 1  2  3  4
    // 5  6  7  8
    // 9 10 11 12

    int row;      // Stores number of rows in the pattern
    int column;   // Stores number of columns in the pattern
    int value = 1; // Counter that tracks the current number to print

    // Get user input for pattern dimensions
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> column;

    // Outer loop controls the rows
    for(int i = 1; i <= row; i++)
    {
        // Inner loop controls the columns
        for(int j = 1; j <= column; j++)
        {
            // Print current value with padding for alignment
            cout << value;
             cout << "  "; 
               
            
            value++; // Increment to next number
        }
        // Move to next line after completing each row
        cout << endl;
    }

    return 0; 
}
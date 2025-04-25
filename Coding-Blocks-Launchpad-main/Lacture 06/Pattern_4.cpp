#include <iostream>
using namespace std;

int main() 
{
    // Program to print a grid pattern with descending numbers in each row
    // Example output for 4 rows and 4 columns:
    // 4 3 2 1
    // 4 3 2 1
    // 4 3 2 1
    // 4 3 2 1

   
    int row;      // Stores number of rows in the pattern
    int column;   // Stores number of columns in the pattern

    // Get user input for pattern dimensions
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> column;

    // Outer loop controls the rows
    // Runs from 1 to the specified number of rows
    for(int i = 1; i <= row; i++)
    {
        // Inner loop prints numbers in descending order
        // Starts from column count down to 1
        for(int j = column; j >= 1; j--)
        {
            // Print current column number (descending) followed by space
            cout << j << " ";
        }
        // After completing each row, move to next line
        cout << endl;
    }

    return 0;  
}
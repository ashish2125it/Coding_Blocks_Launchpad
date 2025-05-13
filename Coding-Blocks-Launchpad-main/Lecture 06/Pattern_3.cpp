#include <iostream>
using namespace std;

int main() 
{
    // Program to print a number grid pattern where each row contains
    // numbers from 1 to the number of columns
    // Example output for 4 rows and 4 columns:
    // 1 2 3 4
    // 1 2 3 4 
    // 1 2 3 4 
    // 1 2 3 4 

    
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
        // Inner loop controls the columns
        // Prints numbers from 1 to the specified number of columns
        for(int j = 1; j <= column; j++)
        {
            // Print current column number followed by space
            cout << j << " ";
        }
        // After printing all columns, move to next line
        cout << endl;
    }

    return 0;  
}
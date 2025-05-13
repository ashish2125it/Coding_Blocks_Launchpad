#include <iostream>
using namespace std;

int main() {
    // Program to print a number pyramid pattern where:
    // - Each row number is repeated as many times as its row number
    // Example output for 4 rows:
    // 1
    // 2 2 
    // 3 3 3
    // 4 4 4 4

    int n;  // Variable to store number of rows
    
    // Get user input for number of rows
    cout << "Enter number of rows: ";
    cin >> n;

    // Validate input to ensure positive number
    

    // Outer loop for each row
    for (int i = 1; i <= n; i++) {
        // Inner loop to print numbers in each row
        // The number of elements equals the row number (i)
        for (int j = 1; j <= i; j++) {
            cout << i << " ";  // Print the row number followed by space
        }
        cout << endl;  // New line after each row
    }

    return 0;  
}
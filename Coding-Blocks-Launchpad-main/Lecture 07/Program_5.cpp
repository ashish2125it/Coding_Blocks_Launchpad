#include <iostream>
using namespace std;

int main() {
    // Program to print an alphabetic grid pattern where:
    // - Each row contains the same letter repeated
    // - Rows progress through the alphabet (A, B, C,...)
    // Example output for 3 rows and 3 columns:
    // A A A
    // B B B
    // C C C

    int rows, cols;  // Variables to store grid dimensions
    char currentChar = 'A';  // Starting character

    // Get user input for grid dimensions
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    
    // Outer loop for each row
    for (int i = 0; i < rows; i++) {
        // Inner loop for each column
        for (int j = 0; j < cols; j++) {
            cout << currentChar << " ";  // Print current character with space
        }
        currentChar++;  // Move to next letter in alphabet
        cout << endl;   // New line after each row
    }

    return 0; 
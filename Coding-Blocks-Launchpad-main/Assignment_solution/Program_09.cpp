#include<iostream>
using namespace std;

int main () {

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5


    int n;
    int i, j;

    cin >> n; // Input the number of rows

    // Outer loop to handle the number of rows (from 1 to n)
    for(i = 1; i <= n; i++)
    {
        // Inner loop to print numbers from 1 to current row number 'i'
        for(j = 1; j <= i; j++)
        {
            cout << j << " "; // Print number followed by a space
        }

        cout << endl; // Move to the next line after printing each row
    }
     
    return 0; // End of the program
}

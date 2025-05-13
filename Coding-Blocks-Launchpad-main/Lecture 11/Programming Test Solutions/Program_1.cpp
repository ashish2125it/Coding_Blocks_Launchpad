#include<iostream>
using namespace std;

/*
Pattern to print for n = 3:

*
**
***

Each row 'i' has 'i' asterisks.
*/

int main() {
    int n;

    // Take input for number of rows
    cin >> n;

    // Outer loop for number of rows
    for(int i = 1; i <= n; i++) {
        
        // Inner loop to print 'i' stars in the ith row
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}

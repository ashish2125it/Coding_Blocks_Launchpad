#include<iostream>
using namespace std;

/*
Pattern to print for input n = 5:

1
2 2
3 0 3
4 0 0 4
5 0 0 0 5

Explanation:
- Each row starts and ends with the row number.
- The inner elements (if any) are all 0s.
*/

int main() {
    int n;
    cin >> n;  // Take number of rows as input

    // Outer loop for each row from 1 to n
    for(int i = 1; i <= n; i++) {

        // Inner loop for each column in the current row
        for(int j = 1; j <= i; j++) {

            // If first or last column in the row, print the row number
            if(j == 1 || j == i)
                cout << i << " ";
            else
                cout << 0 << " ";  // Else, print 0
        }

        cout << endl;  // Move to next row
    }

    return 0;
}

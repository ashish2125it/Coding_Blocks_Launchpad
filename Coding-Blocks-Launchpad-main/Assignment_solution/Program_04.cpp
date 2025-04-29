#include<iostream>
using namespace std;

int main() {


// 1
// 2 2
// 3 0 3
// 4 0 0 4
// 5 0 0 0 5

    int n;
    cin >> n; // Input the number of rows

    // Outer loop to handle the number of rows (1 to n)
    for (int i = 1; i <= n; i++) {
        
        // Inner loop to print values in each row
        for (int j = 1; j <= i; j++) {
            
            // Print the row number if it's the first or last element in the row
            if (j == 1 || j == i) {
                cout << i << "\t"; // Print the row number with a tab space
            } 
            // Otherwise, print 0
            else {
                cout << 0 << "\t"; // Print 0 for middle values
            }
        }

        // Move to the next line after printing each row
        cout << endl;
    }

    return 0;
}

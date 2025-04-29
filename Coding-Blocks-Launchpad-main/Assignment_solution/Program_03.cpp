#include<iostream>
using namespace std;

int main() {



// 1
// 2 3
// 4 5 6
// 7 8 9 10


    int n;
    cin >> n; // Input the number of rows

    int value = 1; // Initialize value to be printed

    // Outer loop for each row from 1 to n
    for (int i = 1; i <= n; i++) {
        
        // Inner loop to print 'i' numbers in the current row
        for (int j = 1; j <= i; j++) {
            cout << value << "\t"; // Print the current value followed by a tab
            value++; // Increment value after each print
        }

        cout << endl; // Move to the next line after each row
    }

    return 0;
}

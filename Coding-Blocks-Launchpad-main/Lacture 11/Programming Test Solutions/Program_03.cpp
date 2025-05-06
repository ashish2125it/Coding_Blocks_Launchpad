#include<iostream>
using namespace std;

/*
Pattern to print for n = 4:

           1  
         2 3 2
       3 4 5 4 3
     4 5 6 7 6 5 4

Each row:
- Starts with (n - i) spaces
- Then prints increasing numbers from i to (i + i - 1)
- Then prints decreasing numbers back down to i
*/

int main() {
    int n;
    cin >> n;  // Take number of rows as input

    // Outer loop for each row
    for(int i = 1; i <= n; i++) {

        // 1. Print (n - i) spaces for alignment (3 spaces per unit)
        for(int space = 1; space <= (n - i); space++) {
            cout << "   ";
        }

        // 2. Print increasing numbers starting from current row value
        int val = i;
        for(int j = 1; j <= i; j++) {
            cout << val << "  ";
            val++;
        }

        // 3. Print decreasing numbers after the peak (excluding the peak)
        val = val - 2;  // Adjust back to the last printed value before peak
        for(int j = 1; j <= i - 1; j++) {
            cout << val << "  ";
            val--;
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}

#include<iostream>
using namespace std;

int main() {


//       1 
//     2 3 2
//   3 4 5 4 3
// 4 5 6 7 6 5 4


    int n;
    cin >> n; // Input the number of rows

    // Loop through each row from 1 to n
    for (int i = 1; i <= n; i++) {
        
        // Print leading spaces to center the pyramid
        for (int j = 1; j <= n - i; j++)
            cout << "  "; // Two spaces for better alignment

        int val = i;

        // Print increasing numbers starting from 'i'
        for (int j = 1; j <= i; j++) {
            cout << val << " ";
            val++;
        }

        // Set val back to second last number to print decreasing part
        val -= 2;

        // Print decreasing numbers
        for (int j = 1; j <= i - 1; j++) {
            cout << val << " ";
            val--;
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}

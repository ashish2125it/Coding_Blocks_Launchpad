#include<iostream>
using namespace std;

int main() {

    // 0
    // 1 1
    // 2 3 5
    // 8 13 21 34

    

    int n;
    cin >> n; // Input the number of rows

    int first_term = 0, second_term = 1; // Initialize the first two terms of the Fibonacci sequence

    // Outer loop for each row from 1 to n
    for (int i = 1; i <= n; i++) {

        // Inner loop to print 'i' Fibonacci numbers in the current row
        for (int j = 1; j <= i; j++) {

            // Print the current Fibonacci term
            cout << first_term << " ";

            // Calculate the next Fibonacci number
            int current_term = first_term + second_term;

            // Update the previous two terms
            first_term = second_term;
            second_term = current_term;
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}

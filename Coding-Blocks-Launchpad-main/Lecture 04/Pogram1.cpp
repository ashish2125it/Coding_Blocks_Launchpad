#include <iostream>
using namespace std;

int main() {
   
    int n;

    
    cout << "Enter the value of n: ";
    // Read the input value and store it in 'n'
    cin >> n;

    // Use a for loop to print numbers from 1 to n
    // Initialize counter 'i' to 1
    // Continue looping while 'i' is less than or equal to 'n'
    // Increment 'i' by 1 after each iteration
    for (int i = 1; i <= n; ++i) {
        // Print the current value of 'i' followed by a space
        cout << i << " ";
    }

    // Print a newline after all numbers are printed
    cout << endl;
    
    
    return 0;
}
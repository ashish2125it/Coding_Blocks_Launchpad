#include <iostream>
using namespace std;

int main() {
    
    int n;              // Stores the input number 
    int factorial = 1;   // Initialize factorial to 1 

    // Get user input
    cout << "Enter a number to find its factorial: ";
    cin >> n;

    // Calculate factorial using a for loop
    // Start with i=1, multiply factorial by each integer up to n
    for (int i = 1; i <= n; ++i) {
        factorial = factorial* i;  // Equivalent to: factorial = factorial * i
    }

    
    cout << "Factorial of " << n << " is: " << factorial << endl;

    
    return 0;
}
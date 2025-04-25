#include <iostream>
using namespace std;

int main() {
    
    int n;

    
    cout << "Enter the value of n: ";
    // Read user input and store in variable n
    cin >> n;

    // Initialize sum variable to accumulate the total
    int sum = 0;

    // Loop through numbers from 1 to n
    // Initialize 'number' to 1
    // Continue while 'number' is less than or equal to n
    // Increment 'number' by 1 each iteration
    for (int number = 1; number <= n; ++number) {
        // Add current number to the running sum
        sum = sum + number;
    }

    // Print the final sum
    cout << "The sum of numbers from 1 to " << n << " is: " << sum << endl;

   
    return 0;
}
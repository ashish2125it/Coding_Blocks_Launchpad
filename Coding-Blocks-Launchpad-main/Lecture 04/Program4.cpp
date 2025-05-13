#include <iostream>
using namespace std;

int main() {
   
    int num;

    
     cout << "Enter a number: ";
    
    // Read the input number from user
    cin >> num;

    // Loop to generate multiplication table from 1 to 10
    // Initialize counter i to 1
    // Run loop while i is less than or equal to 10
    // Increment i by 1 after each iteration
    for (int i = 1; i <= 10; ++i) {
        // Print the product of input number and current counter value
        cout << num * i << " ";
    }

    

    
    return 0;
}
#include <iostream>
using namespace std;

// Recursive function to calculate sum of first N natural numbers
int sumOfNaturalNumbers(int n) {
    // Base case: sum of first 0 numbers is 0
    if (n == 0)
        return 0;

    // Recursive case: sum(n) = n + sum(n - 1)
    return n + sumOfNaturalNumbers(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Check for valid input
    if (num < 0) {
        cout << "Sum is not defined for negative numbers." << endl;
    } else {
        // Call the recursive function and display result
        cout << "Sum of first " << num << " natural numbers is " << sumOfNaturalNumbers(num) << endl;
    }

    return 0;
}

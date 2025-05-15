#include<iostream>
using namespace std;

// Function to add two numbers
// Takes two integers as parameters and returns their sum
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    // Prompt the user to enter two numbers
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Call the add function and store the result
    int sum = add(num1, num2);

    // Print the result
    cout << "Sum = " << sum << endl;

    return 0;
}
/*
Input:
Enter first number: 7
Enter second number: 5

Output:
Sum = 12
*/

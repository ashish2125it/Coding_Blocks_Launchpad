#include <iostream> 
using namespace std;

int main() {
    int number1, number2; 

    // Prompt the user to enter two numbers
    cout << "Enter two numbers: ";
    cin >> number1 >> number2; // Read both numbers from user input

    // Compare the two numbers
    if (number1 > number2) {
        // If number1 is greater than number2
        cout << number1 << " is larger than " << number2 << endl;
    } else if (number2 > number1) {
        // If number2 is greater than number1
        cout << number2 << " is larger than " << number1 << endl;
    } else {
        // If both numbers are equal
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}

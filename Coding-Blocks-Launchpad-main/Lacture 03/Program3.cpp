#include <iostream>
using namespace std;

int main() {
    int number1, number2;

   
    cout << "Enter two numbers: ";
    cin >> number1 >> number2;

    // Comparing the two numbers
    if (number1 > number2) {
        cout << number1 << " is larger than " << number2 << endl;
    } else if (number2 > number1) {
        cout << number2 << " is larger than " << number1 << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    
    int number1, number2, number3;

    
    cout << "Enter three numbers: ";
    // Read the three numbers from standard input
    cin >> number1 >> number2 >> number3;

    // Compare the three numbers to find the largest
    if (number1 >= number2 && number1 >= number3) {
        // If number1 is greater than or equal to both number2 and number3
        cout << number1 << " is the largest." << endl;
    } else if (number2 >= number1 && number2 >= number3) {
        // If number2 is greater than or equal to both number1 and number3
        cout << number2 << " is the largest." << endl;
    } else {
        // If neither number1 nor number2 is the largest, then number3 must be
        cout << number3 << " is the largest." << endl;
    }

   
    return 0;
}
#include <iostream> 
using namespace std;

int main() {
    int num; 

    
    cout << "Enter a number: ";
    cin >> num; // Read the number from user input

    // Check if the number is positive, negative, or zero
    if (num > 0) {
        // If number is greater than 0, it's positive
        cout << "The number is Positive." << endl;
    } else if (num < 0) {
        // If number is less than 0, it's negative
        cout << "The number is Negative." << endl;
    } else {
        // If number is neither positive nor negative, it's zero
        cout << "The number is Zero." << endl;
    }

    return 0; 
}


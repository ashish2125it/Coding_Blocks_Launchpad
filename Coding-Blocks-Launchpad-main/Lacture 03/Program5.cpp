#include <iostream>
using namespace std;

int main() {
   
    int age;

    
    cout << "Enter your age: ";
    // Read the age input from the user
    cin >> age;

    // Check the age category using if-else statements
    
     if (age <= 12) {
        // If age is 12 or younger, classify as a Child
        cout << "You are a Child." << endl;
    } else if (age <= 59) {
        // If age is between 13 and 59, classify as an Adult
        cout << "You are an Adult." << endl;
    } else {
        // If age is 60 or older, classify as a Senior Citizen
        cout << "You are a Senior Citizen." << endl;
    }

    
    return 0;
}
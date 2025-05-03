#include <iostream>
using namespace std;

int main() {
    // Declare an array of size 5 to store integers
    int numbers[5];

    // Input elements into the array
    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];  // Taking input from user
    }

    // Display the elements of the array
    cout << "The elements in the array are:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

 

    return 0;
}

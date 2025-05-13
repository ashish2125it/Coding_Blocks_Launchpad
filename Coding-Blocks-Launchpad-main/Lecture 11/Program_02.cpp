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

    // Find the sum of all elements in the array
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];  // Adding each element to sum
    }
    cout << "Sum of all elements: " << sum << endl;

    // Find the maximum element in the array
    int max = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];  // Update max if current element is greater
        }
    }
    cout << "Maximum element: " << max << endl;

    return 0;
}

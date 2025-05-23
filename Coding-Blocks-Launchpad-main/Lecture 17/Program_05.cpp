#include <iostream>   
#include <string>    

using namespace std;

int main() {
    string input;         // To store the input string
    int vowelCount = 0;   // To count the number of vowels

    // Ask user to enter a string
    cout << "Enter a string: ";
    cin >> input;  // Takes input 

    // Loop through each character in the string
    for (int i = 0; i < input.length(); i++) {
        char ch = input[i];

        // Check if the character is a vowel (both lowercase and uppercase)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowelCount++;
        }
    }

    // Display the result
    cout << "Number of vowels in the string: " << vowelCount << endl;

    return 0;
}

#include <iostream>  
#include <string>     
using namespace std;

int main() {
    string name;         // To store the input string
    string reversed = "";  // To store the reversed string

    // Prompt user to enter a name
    cout << "Enter a string to check palindrome: ";
    cin >> name;  

    // Reverse the string
    for (int i = name.length() - 1; i >= 0; i--) {
        reversed += name[i];  // Append characters in reverse order
    }

    // Check if the original string is equal to the reversed string
    if (name == reversed) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}

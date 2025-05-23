#include <iostream>   
#include <string>     
using namespace std;

int main() {
    string name;        // Variable to store the original input
    string reversed = "";  // Variable to store the reversed string

    
    cout << "Enter your name: ";
    cin >> name;  

    // Reverse the string using a loop
    for (int i = name.length() - 1; i >= 0; i--) {
        reversed += name[i];  // Add characters in reverse order
    }

    // Output the reversed string
    cout << "Reversed name: " << reversed << endl;

    return 0;  
}

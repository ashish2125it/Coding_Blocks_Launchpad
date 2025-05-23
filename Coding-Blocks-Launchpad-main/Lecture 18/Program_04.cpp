#include <iostream>  
#include <string>     
using namespace std;

int main() {
    string name;

    // Ask the user for input
    cout << "Enter a string: ";
    cin >> name;  // Takes input 

    // Check each character
    for (int i = 0; i < name.length(); i++) {
        char ch = name[i];

        // Check if character is uppercase 
        if (ch >= 'A' && ch <= 'Z') {
          name[i] = ch-'A' + 'a';
        } else {
          name[i] = ch -'a' + 'A' ;  
        }
    }

    cout<<"Toggle string is "<<name ;

    return 0;
}

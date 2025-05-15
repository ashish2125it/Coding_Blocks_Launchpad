#include<iostream>
using namespace std;

// Function to print the name
// Takes a string parameter 'name' and prints a greeting
void printName(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    string name;

    // Prompt the user to enter their name
    cout << "Enter your name: ";
    cin >> name; // Takes input (only one word; stops at space)

    // Call the function to print the name
    printName(name);

    return 0;
}

/*
Input:
Enter your name: Ashish

Output:
Hello, Ashish!
*/

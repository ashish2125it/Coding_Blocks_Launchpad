#include <iostream>
using namespace std;

/*
Write a program which takes and character input and check that whether a number is an Upper Case or a Lower Case.
*/

int main() { 
    char ch;
    cin >> ch;
    if (ch >= 65 && ch <= 90) {
        cout << "Upper Case";
    } else if (ch >= 97 && ch <= 122) {
        cout << "Lower Case";
    } else {
        cout << "Not defined";
    }

    return 0;
}
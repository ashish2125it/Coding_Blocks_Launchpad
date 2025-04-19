#include <iostream>
using namespace std;

/*
ABCDEEDCBA
ABCDDCBA
ABCCBA
ABBA
AA
*/

int main() { 
    /*
    Way 1:
        
        for (int i = 1; i <= 5; i++) {
            char ch = 'A';
            for (int j = i; j <= 5; j++) {
                cout << ch;
                ch++;
            }
            ch--;
            for (int j = i; j <= 5; j++) {
                cout << ch;
                ch--;
        }
            cout << endl;
        }
    */

    // Way 2: 

    for (int i = 1; i <= 5; i++) {
        for (char ch = 'A'; ch <= 'E' - i + 1; ch++) {
            cout << ch;
        }
        for (char ch = 'E' - i + 1; ch >= 'A'; ch--) {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

/*
1
01
101
0101
10101
*/

int main() {
    /*
    Way 1: 

    int temp = 1;
    for (int i = 1; i <= 5; i++) {
        if (i % 2 == 0) {
            temp = 0;
        } else {
            temp = 1;
        }
        for (int j = 1; j <= i; j++) {
            cout << temp;
            if (temp == 1) {
                temp = 0;
            } else {
                temp = 1;
            }
            OR
            temp = !temp;
            OR
            temp = 1 - temp;
        }
        cout << endl;
    }
    */

    // Way2: 
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 0; j < i; j++) {
            cout << (i + j) % 2;
        }
        cout << endl;
    }

    return 0;
}
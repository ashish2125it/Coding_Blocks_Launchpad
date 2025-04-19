#include <iostream>
using namespace std;

/*
Find largest of 3 numbers
*/

int main() {
    int a = 5, b = 10, c = 3;
    if (a > b && a > c) {
        cout << a << endl;
    }
    else if (b > c) {
        cout << b << endl;
    }
    else {
        cout << c << endl;
    }
    return 0;
}
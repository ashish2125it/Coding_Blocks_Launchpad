#include <iostream>
using namespace std;

/*
Reverse a number
*/

int main() { 
    int num;
    cin >> num;
    int rev = 0;
    while (num > 0) {
        int rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    cout << rev;
    return 0;
}
#include <iostream>
using namespace std;

/*
Check if a number is prime or not
*/

int main() {
    int num;
    cin >> num;
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    if (count == 2) {
        cout << "Prime";
    } else {
        cout << "Not Prime";
    }

    return 0;
}
#include <iostream>
using namespace std;

/*
Print all prime numbers between 2 to N
*/

int main() {
    int N;
    cin >> N;

    for (int i = 2; i <= N; i++) {
        int count = 0;
        for (int j = 1; j <= N; j++) {
            if (i % j == 0) {
                count++;
            }
        }
        if (count == 2) {
            cout << i << endl;
        }
    }

    return 0;
}
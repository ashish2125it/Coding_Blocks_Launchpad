#include <iostream>
using namespace std;

/*
54321
5432
543
54
5
*/

int main() { 
    for (int i = 1; i <= 5; i++) {
        for (int j = 5; j >= i; j--) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
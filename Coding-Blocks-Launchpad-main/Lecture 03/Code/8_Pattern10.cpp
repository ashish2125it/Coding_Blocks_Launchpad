#include <iostream>
using namespace std;

/*
54321
4321
321
21
1
*/

int main() { 
    for (int i = 1; i <= 5; i++) {
        for (int j = 5 - i + 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
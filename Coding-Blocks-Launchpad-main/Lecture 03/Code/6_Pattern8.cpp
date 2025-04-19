#include <iostream>
using namespace std;

/*
12345
2345
345
45
5
*/

int main() { 
    for (int i = 1; i <= 5; i++) {
        for (int j = i; j <= 5; j++) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

/*
    1
   232
  34543
 4567654
567898765
*/

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = i; j < 5; j++) {
            cout << ' ';
        }
        for (int k = i; k <= 2 * i - 1; k++) {
            cout << k;
        }
        for (int l = 2 * i - 2; l >= i; l--) {
            cout << l;
        }
        cout << endl;
    }

    return 0;
}
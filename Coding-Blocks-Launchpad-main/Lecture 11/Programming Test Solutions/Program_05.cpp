#include <iostream>
using namespace std;

int main() {
    int n ; // Half of the total number of rows
	cin>>n;

	                //      1
                    //    2 3 2
                    //  3 4 5 4 3
                    //    2 3 2
                    //      1

    // Upper part of the pattern
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }

        // Print increasing numbers
        for (int j = i; j < 2 * i; j++) {
            cout << j << " ";
        }

        // Print decreasing numbers
        for (int j = 2 * i - 2; j >= i; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    // Lower part of the pattern
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }

        // Print increasing numbers
        for (int j = i; j < 2 * i; j++) {
            cout << j << " ";
        }

        // Print decreasing numbers
        for (int j = 2 * i - 2; j >= i; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}

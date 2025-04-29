#include<iostream>
using namespace std;

int main() {

                    //     1          1
                    //    1 2       2 1  
                    //    1 2 3   3 2 1
                    //    1 2 3 4 3 2 1   
    int n;
    cin >> n; // Input number of rows

    // Loop for each row from 1 to n
    for (int i = 1; i <= n; i++) {

        // 1. Print increasing numbers from 1 to i
        for (int j = 1; j <= i; j++)
            cout << j << " ";

        // 2. Print spaces in the middle
        // Total spaces = (2 * n - 1) - 2 * i
        // Two spaces for each unit to maintain alignment
        int space = (2 * n - 1) - 2 * i;
        for (int j = 1; j <= space; j++)
            cout << "  ";

        // 3. Decide where to start for decreasing numbers
        // Last row has one extra element in the middle, so start from i-1
        int start;
        if (i == n)
            start = i - 1;
        else
            start = i;

        // 4. Print decreasing numbers from `start` down to 1
        for (int j = start; j >= 1; j--)
            cout << j << " ";

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}

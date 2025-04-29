#include<iostream>
using namespace std;

int main() {
// 1 
// 11
// 111 
// 1001 
// 11111
// 100001

    int n;
    cin >> n; // Input the number of rows

    // Loop to generate each row
    for(int i = 1; i <= n; i++)
    {
        // If the current row number is even
        if(i % 2 == 0)
        {
            cout << 1; // Print the first 1

            // Print (i - 2) zeros in the middle
            int zero_times = i - 2;
            for(int j = 1; j <= zero_times; j++)
                cout << 0;

            cout << 1; // Print the last 1
        }
        else
        {
            // For odd row number, print all 1s
            for(int j = 1; j <= i; j++)
                cout << 1;
        }

        cout << endl; // Move to the next line after each row
    }

    return 0;
}

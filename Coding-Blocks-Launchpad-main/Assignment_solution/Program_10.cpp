#include<iostream>
using namespace std;

int main () {


// 1 2 3 4 5 
// 2 2 3 4 5 
// 3 3 3 4 5 
// 4 4 4 4 5 
// 5 5 5 5 5  


    int n;
    cin >> n; // Input the size of the pattern (number of rows and columns)

    // Outer loop to handle each row
    for(int i = 1; i <= n; i++) {

        // First part: print the current row number 'i', 'i' times
        for(int j = 1; j <= i; j++)
            cout << i << " ";

        // Second part: print numbers from i+1 to n
        for(int j = i + 1; j <= n; j++)
            cout << j << " ";

        // Move to the next line after finishing a row
        cout << endl;
    }

    return 0; 
}

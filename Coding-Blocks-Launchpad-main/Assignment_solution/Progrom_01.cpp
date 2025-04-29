#include<iostream>
using namespace std;

int main() {

    // 1******
    // 12*****
    // 123****
    // 1234***
    // 12345**
    // 123456*
    // 1234567


    
    int n;
    cin >> n; // Input the number of rows

    // Outer loop for each row from 1 to n
    for (int i = 1; i <= n; i++) {
        
        // First inner loop: print increasing numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // Second inner loop: print (n - i) asterisks '*' after numbers
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }

        // Move to the next line after each row is printed
        cout << endl;
    }

    return 0; 
}

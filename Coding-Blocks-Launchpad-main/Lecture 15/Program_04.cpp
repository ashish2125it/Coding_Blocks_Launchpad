#include<iostream>
using namespace std;

// Function that takes an integer by value
// It creates a copy of the original variable
void modify(int x) {
    x = x + 10; // Changes only the local copy
    cout << "Inside function, x = " << x << endl;
}

int main() {
    int num = 5;

    // Call the function with num (pass by value)
    modify(num);

    // The original variable 'num' remains unchanged
    cout << "In main, num = " << num << endl;

    return 0;
}
/*
Initial value of num: 5

Function call:
Inside function, x = 15  // x = num + 10, but x is a copy

After function:
In main, num = 5         // num is unchanged
*/

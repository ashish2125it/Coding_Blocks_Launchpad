#include<iostream>
using namespace std;

// Function that takes an integer by reference
// Changes made here will affect the original variable
void modify(int &x) {
    x = x + 10;  // This directly modifies the original variable
    cout << "Inside function, x = " << x << endl;
}

int main() {
    int num = 5;

    // Call the function with num (pass by reference)
    modify(num);

    // The original variable 'num' is now changed
    cout << "In main, num = " << num << endl;

    return 0;
}

/*
Initial value of num: 5

Function call:
Inside function, x = 15   // x refers to num, so change affects num

After function:
In main, num = 15         // num is updated
*/

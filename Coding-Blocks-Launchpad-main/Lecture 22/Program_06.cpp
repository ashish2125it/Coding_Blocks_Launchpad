#include <iostream>
using namespace std;

// Recursive function to calculate a^b
int power(int base, int exponent) {
    // Base case: any number to the power 0 is 1
    if (exponent == 0)
        return 1;

    // Recursive case: a^b = a * a^(b-1)
    return base * power(base, exponent - 1);
}

int main() {
    int a, b;
    cout << "Enter base and exponent (a^b): ";
    cin >> a >> b;

    int result = power(a, b);
    cout << a << "^" << b << " = " << result << endl;

    return 0;
}

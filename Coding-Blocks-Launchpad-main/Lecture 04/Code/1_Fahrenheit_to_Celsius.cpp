#include <iostream>
using namespace std;

/*
Write a program which takes initial value, final  value and a step value and prints a table for  Fahrenheit to Celsius using formula - C = (5/9)(F
– 32)
*/

int main() { 
    int initial, final, step;
    cin >> initial >> final >> step;
    for (int F = initial; F <= final; F = F + step) {
        double C = (5.0 / 9) * (F - 32);
        cout << F << ' ' << C << endl;
    }

    return 0;
}
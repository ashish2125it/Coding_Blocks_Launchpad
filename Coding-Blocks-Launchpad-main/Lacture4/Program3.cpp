#include <iostream>
using namespace std;

int main() {
    int n;

    // Taking input from user
    cout << "Enter the value of n: ";
    cin >> n;
    int sum =0;

    
    for (int number = 1; number<= n; ++number) {
       sum = sum + number;
    }

    cout << sum<< " ";
    return 0;
}

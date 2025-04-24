#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cout << "Enter N: ";
    cin >> N;
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    cout << "Sum = " << sum;
    return 0;
}

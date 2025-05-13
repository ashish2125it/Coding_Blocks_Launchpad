#include <iostream>
using namespace std;

int main() {
    int n;

    
    cout << "Enter the value of n: ";
    // Store the user's input in variable n
    cin >> n;

    // Countdown loop from n down to 1
    // Initialize i with n
    // Continue while i is greater than or equal to 1
    // Decrement i by 1 each iteration
    for (int i = n; i >= 1; --i) {
        // Print current value of i followed by space
        cout << i << " ";
    }

    // Print newline after countdown completes
    cout << endl;
    
    
    return 0;
}
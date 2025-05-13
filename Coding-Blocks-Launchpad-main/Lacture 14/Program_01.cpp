#include <iostream>
#include <cmath>  // for pow() function
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0;
    
    // Input number from user
    cout << "Enter a number: ";
    cin >> num;

    // Store the original number for later comparison
    originalNum = num;

    // Find the number of digits in the number
    int n = 0;
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        ++n;
    }

    // Calculate the sum of the digits raised to the power 'n'
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;                  // Extract last digit
        result += pow(remainder, n);            // Add digit^n to result
        temp /= 10;                             // Remove last digit
    }

    // Check if the number is an Armstrong number
    if (result == originalNum)
        cout << originalNum << " is an Armstrong number." << endl;
    else
        cout << originalNum << " is not an Armstrong number." << endl;

    return 0;
}

/*
🌟 Armstrong Number Examples:

✅ 3-digit:
   153 => 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153 ✔️
   370 => 3^3 + 7^3 + 0^3 = 27 + 343 + 0 = 370 ✔️
   371 => 3^3 + 7^3 + 1^3 = 27 + 343 + 1 = 371 ✔️
   407 => 4^3 + 0^3 + 7^3 = 64 + 0 + 343 = 407 ✔️

✅ 4-digit:
   9474 => 9^4 + 4^4 + 7^4 + 4^4 = 6561 + 256 + 2401 + 256 = 9474 ✔️

❌ Not Armstrong:
   123 => 1^3 + 2^3 + 3^3 = 1 + 8 + 27 = 36 ❌
   100 => 1^3 + 0^3 + 0^3 = 1 ❌
*/

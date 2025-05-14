#include<iostream>
#include<cmath>  // For using the pow() function
using namespace std;

int main() {
	
	int n;
	cin >> n;  // Input the number to check

	int number = n;
	int number_of_digits = 0;

	// Step 1: Count the number of digits in the number
	while(number > 0) {
		int last_digit = number % 10;  // Extract the last digit (not used here, just for clarity)
		number_of_digits++;            // Increment the digit count
		number = number / 10;          // Remove the last digit
	}

	number = n;  // Reset number to original input for the next loop
	int sum = 0;

	// Step 2: Calculate the sum of each digit raised to the power of number_of_digits
	while(number > 0) {
		int last_digit = number % 10;  
		sum += pow(last_digit, number_of_digits);  // Add power of digit to sum
		number = number / 10;  // Remove the last digit
	}

	// Step 3: Check if the number is an Armstrong number
	if(sum == n) {
		cout << "true" << " ";  // It's an Armstrong number
	} else {
		cout << "false" << " ";  // Not an Armstrong number
	}

	return 0;
}

/*
Example:
Input: 153

Explanation:
153 has 3 digits.
1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153

Since the sum equals the original number, the output is:
true
*/

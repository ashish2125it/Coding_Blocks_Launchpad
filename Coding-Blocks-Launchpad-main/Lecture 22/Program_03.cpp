#include <iostream>
using namespace std;

// Recursive function to check if a string is a palindrome
bool isPalindrome(string str, int start, int end) {
    // Base case: If start >= end, all characters matched
    if (start >= end)
        return true;

    // If characters at current positions don't match, it's not a palindrome
    if (str[start] != str[end])
        return false;

    // Move towards the middle
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    // Call the recursive function
    if (isPalindrome(input, 0, input.length() - 1)) {
        cout << input << " is a palindrome." << endl;
    } else {
        cout << input << " is not a palindrome." << endl;
    }

    return 0;
}

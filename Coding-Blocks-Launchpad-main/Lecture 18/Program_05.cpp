#include <iostream>
#include <map>
using namespace std;

/*
Problem Statement:
Given a string, find the first non-repeating character.
If all characters repeat, print a suitable message.

Input:
- One line containing the input string.

Output:
- Print the first non-repeating character.
- If no such character exists, print "No non-repeating character".

Example:
Input:
swiss

Output:
w
*/

char firstNonRepeatingChar(const string& s) {
    map<char, int> freqMap;

    // Count frequency of each character
    for (int i=0;i<s.length();i++) {
        freqMap[s[i]]++;
    }

    // Find first character with frequency 1
    for (int i=0;i<s.length();i++) {
        if (freqMap[s[i]] == 1) {
            return s[i];
        }
    }

    return '\0'; // Indicates no non-repeating character found
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    char result = firstNonRepeatingChar(s);

    if (result != '\0') {
        cout << "First non-repeating character: " << result << endl;
    } else {
        cout << "No non-repeating character" << endl;
    }

    return 0;
}

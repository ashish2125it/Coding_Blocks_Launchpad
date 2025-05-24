#include <iostream>
#include <map>
using namespace std;

/*
Problem Statement:
Given two strings, check if they are anagrams of each other.
Two strings are anagrams if they contain the same characters
with the same frequency, but possibly in a different order.

Input:
- First line contains string s1
- Second line contains string s2

Output:
- Print "Anagrams" if s1 and s2 are anagrams
- Print "Not Anagrams" otherwise

Example:
Input:
listen
silent

Output:
Anagrams
*/

bool areAnagrams(string s1, string s2) {
    if (s1.length() != s2.length())
        return false;

    map<char, int> freqMap1, freqMap2;

    // Count frequency of each character in s1
    for (char ch : s1) {
        freqMap1[ch]++;
    }

    // Count frequency of each character in s2
    for (char ch : s2) {
        freqMap2[ch]++;
    }

    // Compare both maps
    return freqMap1 == freqMap2;
}

int main() {
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    if (areAnagrams(s1, s2)) {
        cout << "Anagrams" << endl;
    } else {
        cout << "Not Anagrams" << endl;
    }

    return 0;
}

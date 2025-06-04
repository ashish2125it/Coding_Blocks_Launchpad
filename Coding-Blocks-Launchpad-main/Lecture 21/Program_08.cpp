#include <iostream>
#include <string>
using namespace std;

/*
    Problem:
    --------
    Given a string, generate and print all possible substrings.

    Example:
    Input: "abc"
    Output:
    a
    ab
    abc
    b
    bc
    c
*/

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int n = s.length();

    // Outer loop for the starting index of substring
    for (int start = 0; start < n; start++) {
        // Inner loop for the ending index of substring
        for (int end = start; end < n; end++) {
            // Print substring from start to end
            cout << s.substr(start, end - start + 1) << "\n";
        }
    }

    return 0;
}

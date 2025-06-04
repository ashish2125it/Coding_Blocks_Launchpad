#include <iostream>
#include <string>
using namespace std;

/*
    Problem Statement:
    ------------------
    Given a string, find the total number of substrings which start and end with the same character.

    Approach:
    ---------
    - Generate all substrings using two nested loops.
    - Check if the first and last character of each substring are the same.
    - If yes, increment count.

    Time Complexity: O(N^2)
*/

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    int n = s.length();
    int count = 0;

    // Generate all substrings
    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            // Check if start and end characters are same
            if (s[start] == s[end]) {
                count++;
            }
        }
    }

    cout << "Number of substrings that start and end with the same character: " << count << endl;

    return 0;
}

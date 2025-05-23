#include <iostream>   
using namespace std;

int main() {
    string str;

    // Ask user for input
    cout << "Enter a string: ";
    cin >> str;  // Takes input 

    char mostFreqChar = '\0';  // To store the most frequent character
    int maxCount = 0;          // Maximum frequency found so far

    // Outer loop to pick each character one by one
    for (int i = 0; i < str.length(); i++) {
        int count = 0;

        // Inner loop to count frequency of current character
        for (int j = 0; j < str.length(); j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }

        // Update the most frequent character if needed
        if (count > maxCount) {
            maxCount = count;
            mostFreqChar = str[i];
        }
    }

    // Output the result
    cout << "Most frequent character: " << mostFreqChar << endl;
    cout << "Frequency: " << maxCount << endl;

    return 0;
}

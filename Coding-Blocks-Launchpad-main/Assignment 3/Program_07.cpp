#include<iostream>
using namespace std;

/*
Pattern for input n = 5:

1
2 2
3 0 3
4 0 0 4
5 0 0 0 5

Explanation:
- i represents the current row number.
- In each row:
  - If it's the first or last column (j == 1 or j == i), print the row number `i`.
  - Otherwise, print 0.
*/

int main() {
	int n;
	cin >> n; // Input the number of rows

	// Outer loop for each row
	for(int i = 1; i <= n; i++) {
		
		// Inner loop for each column in the row
		for(int j = 1; j <= i; j++) {
			
			// Check if it's the first or last column in the row
			if(j == 1 || j == i)
				cout << i << " ";
			else
				cout << 0 << " ";
		}
		
		cout << endl; // Move to the next line after each row
	}

	return 0;
}

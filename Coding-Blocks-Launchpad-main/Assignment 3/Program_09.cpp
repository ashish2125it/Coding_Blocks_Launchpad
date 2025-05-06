#include<iostream>
using namespace std;

/*
Pattern for n = 4:

            1           1 
           1 2       2 1  
          1 2 3   3 2 1
         1 2 3 4 3 2 1

Explanation:
- Total values in a row = 2*n - 1 (including gaps)
- Left side: numbers from 1 to i
- Center space: 2*(n - i) spaces
- Right side: numbers from i-1 down to 1 (if i == n, from i-1 down to 1)
*/

int main() {
	int n;
	cin >> n;

	for(int i = 1; i <= n; i++) {
		int tot_col = 2 * n - 1; // total count of positions in a row

		// Print left side numbers from 1 to i
		int val = 1;
		for(int j = 1; j <= i; j++) {
			cout << val << " ";
			val++;
		}

		// Print middle spaces: each space = 2 spaces (for 1 number width)
		int space = tot_col - 2 * i;
		for(int j = 1; j <= space; j++) {
			cout << "  ";
		}

		// Prepare for right side numbers:
		// if last row, we've already printed the peak number, so start from val - 2
		// else, start from val - 1
		if(i == n)
			val = val - 2;
		else 
			val = val - 1;

		// Print right side numbers
		for(int j = 1; j <= i && val > 0; j++) {
			cout << val << " ";
			val--;
		}

		cout << endl;
	}

	return 0;
}

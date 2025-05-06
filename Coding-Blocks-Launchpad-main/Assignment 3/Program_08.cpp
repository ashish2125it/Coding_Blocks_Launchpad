#include<iostream>
using namespace std;

/*
Pattern for input n = 5:

            5                   5  
           5 4               4 5 
          5 4 3           3 4 5 
         5 4 3 2       2 3 4 5 
        5 4 3 2 1   1 2 3 4 5 
       5 4 3 2 1 0 1 2 3 4 5 
        5 4 3 2 1   1 2 3 4 5 
         5 4 3 2       2 3 4 5 
          5 4 3           3 4 5 
           5 4               4 5 
            5                   5

Explanation:
- Total number of columns in each row = 2*n + 1.
- Upper half: Print decreasing numbers from n, spaces, then increasing numbers.
- Middle row: Print full sequence from n to 0 and back to n.
- Lower half: Mirror of the upper half.
*/

int main() {
	int n;
	cin >> n;
	int tot_col = 2 * n + 1; // total columns in each row

	// Upper half
	for(int i = 1; i <= n; i++) {
		int val = n;

		// Print decreasing numbers from n
		for(int j = 1; j <= i; j++) {
			cout << val-- << " ";
		}

		// Print spaces between two number sequences
		int space = tot_col - 2 * i;
		for(int j = 1; j <= space; j++) {
			cout << "  ";
		}

		// Print increasing numbers
		val = n - i + 1;
		for(int j = 1; j <= i; j++) {
			cout << val++ << " ";
		}

		cout << endl;
	}

	// Middle row: From n to 0 and back to n
	int val = n;
	int dec = 1; // flag to check when to increment
	for(int j = 1; j <= tot_col; j++) {
		cout << val << " ";

		if(val == 0) {
			dec = 0; // start incrementing after reaching 0
		}

		if(dec == 0)
			val++;
		else
			val--;
	}
	cout << endl;

	// Lower half
	for(int i = 1; i <= n; i++) {
		int val = n;

		// Print decreasing numbers
		for(int j = 1; j <= (n - i + 1); j++) {
			cout << val-- << " ";
		}

		// Print middle spaces
		int space = tot_col - 2 * (n - i + 1);
		for(int j = 1; j <= space; j++) {
			cout << "  ";
		}

		// Print increasing numbers from current i to n
		for(int j = i; j <= n; j++) {
			cout << j << " ";
		}

		cout << endl;
	}

	return 0;
}

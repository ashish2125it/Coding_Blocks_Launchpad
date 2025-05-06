#include<iostream>
using namespace std;

/*
Pattern for n = 5:

            5 4 3 2 1 0 1 2 3 4 5 
              4 3 2 1 0 1 2 3 4 
                3 2 1 0 1 2 3 
                  2 1 0 1 2 
                    1 0 1 
                      0 
                    1 0 1 
                  2 1 0 1 2 
                3 2 1 0 1 2 3 
              4 3 2 1 0 1 2 3 4 
            5 4 3 2 1 0 1 2 3 4 5

- First n rows: decreasing peak values from n to 1
- Middle row: only 0
- Last n rows: increasing peak values from 1 to n
*/

int main() {
	int n;
	cin >> n;

	int tot_col = 2 * n + 1;  // Total columns in the widest row (optional here)

	// Top Half (excluding center row)
	for(int i = 1; i <= n; i++) {
		// Print leading spaces
		int space = i - 1;
		for(int j = 1; j <= space; j++)
			cout << "  ";

		// Print decreasing numbers from n - i + 1 to 0
		int val = n - i + 1;
		int start_val = val;
		while(val >= 0) {
			cout << val << " ";
			val--;
		}

		// Print increasing numbers from 1 to start_val
		val = 1;
		while(val <= start_val) {
			cout << val << " ";
			val++;
		}
		cout << endl;
	}

	// Center row (just 0 in the middle)
	for(int i = 1; i <= n; i++)
		cout << "  ";
	cout << 0 << " ";
	cout << endl;

	// Bottom Half
	for(int i = 1; i <= n; i++) {
		// Print leading spaces
		int space = n - i;
		for(int j = 1; j <= space; j++)
			cout << "  ";

		// Print decreasing numbers from i to 0
		int val = i;
		int start_val = val;
		while(val >= 0) {
			cout << val << " ";
			val--;
		}

		// Print increasing numbers from 1 to start_val
		val = 1;
		while(val <= start_val) {
			cout << val << " ";
			val++;
		}
		cout << endl;
	}

	return 0;
}

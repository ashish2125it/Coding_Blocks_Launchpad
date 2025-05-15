#include<iostream>
#include<climits>      // For INT_MAX
#include<algorithm>    // For sort function
using namespace std;


/*
Input:
1
7
2 3 4 5 7 8 9
10

Explanation:
After sorting: [2, 3, 4, 5, 7, 8, 9]
We need to find two prices such that their sum is 10.
Valid pairs:
- (2, 8) → difference = 6
- (3, 7) → difference = 4
- (4, 6) → 6 is not present
- (5, 5) → 5 appears only once, not valid
The pair (3, 7) has the smallest difference among valid pairs.
Output:
Deepak should buy roses whose prices are 3 and 7.
*/



int main() {
    int t;
    cin >> t; // Number of test cases

    while(t--) {
        int n;
        cin >> n; // Number of rose prices

        int arr[10000]; // Array to store rose prices

        for(int i = 0; i < n; i++)
            cin >> arr[i]; // Input the prices

        int target;
        cin >> target; // Total money Deepak wants to spend

        sort(arr, arr + n); // Sort the array for two-pointer approach

        int i = 0, j = n - 1; // Two pointers
        int max_diff = INT_MAX; // To store minimum difference
        int value1 = -1, value2 = -1; // To store final pair of prices

        // Two-pointer technique to find pair with sum == target and minimum difference
        while(i < j) {
            int sum = arr[i] + arr[j];

            if(sum == target) {
                int curr_diff = arr[j] - arr[i];

                if(max_diff > curr_diff) {
                    // Update best pair if this has a smaller difference
                    max_diff = curr_diff;
                    value1 = arr[i];
                    value2 = arr[j];
                }
                i++;
                j--;
            } 
            else if(sum > target)
                j--; // Decrease sum
            else
                i++; // Increase sum
        }

        // Output the selected rose prices
        cout << "Deepak should buy roses whose prices are " << value1 << " and " << value2 << ".";
        cout << endl;
    }

    return 0;
}


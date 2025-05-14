#include <iostream>
using namespace std;

int main() {
    
    // Step 1: Input the size of the array
    int n;
    cin >> n;  // Input the number of elements in the array

    // Step 2: Declare the array and take input values
    int arr[n];  // Create an array of size 'n'
    for(int i = 0; i < n; i++) 
        cin >> arr[i];  // Input the elements of the array

    // Step 3: Initialize sum and prefix_sum array
    long long sum = 0;  // Variable to store the cumulative sum
    long long prefix_sum[n] = {0};  // Array to store prefix sums, initialized to 0

    // Step 4: Calculate the prefix sum array
    for(int i = 0; i < n; i++) {
        sum += arr[i];            // Add the current element to the cumulative sum
        prefix_sum[i] = sum;      // Store the cumulative sum at the current index
    }

    // Step 5: Output the prefix sum array
    for(int i = 0; i < n; i++) {
        cout << prefix_sum[i] << " ";  // Print each element of the prefix sum array
    }

    cout << endl;  // Print a newline at the end of output

    return 0;
}

/*
Example:
Input:
5
1 2 3 4 5

Explanation:
For an array [1, 2, 3, 4, 5], the prefix sum is calculated as:
1st element: 1
2nd element: 1 + 2 = 3
3rd element: 1 + 2 + 3 = 6
4th element: 1 + 2 + 3 + 4 = 10
5th element: 1 + 2 + 3 + 4 + 5 = 15

Output:
1 3 6 10 15
*/

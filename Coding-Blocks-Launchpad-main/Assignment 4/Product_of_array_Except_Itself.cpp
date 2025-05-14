#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;  // Input the size of the array
    int arr[n];  // Declare an array of size 'n'

    // Step 1: Input the elements of the array
    for(int i = 0; i < n; i++) 
        cin >> arr[i];  // Input each element into the array

    // Step 2: Declare arrays for prefix and suffix products
    int prefix[n];  // Array to store prefix products
    int suffix[n];  // Array to store suffix products

    // Step 3: Initialize the first element of prefix and the last element of suffix
    prefix[0] = arr[0];  // The prefix product at index 0 is the first element of the array
    suffix[n - 1] = arr[n - 1];  // The suffix product at the last index is the last element of the array

    // Step 4: Calculate the prefix product array
    for(int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * arr[i];  // Each element in the prefix array is the product of the current and the previous prefix
    }

    // Step 5: Calculate the suffix product array
    for(int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * arr[i];  // Each element in the suffix array is the product of the current and the next suffix
    }

    // Step 6: Calculate the final result array
    int ans[n];  // Array to store the final result

    // The first element of the result array is just the second element of the suffix array
    ans[0] = suffix[1];

    // The last element of the result array is just the second-to-last element of the prefix array
    ans[n - 1] = prefix[n - 2];

    // Step 7: Calculate the intermediate result elements
    for(int i = 1; i < n - 1; i++) {
        ans[i] = prefix[i - 1] * suffix[i + 1];  // For the middle elements, multiply the prefix product and the suffix product
    }

    // Step 8: Output the result array
    for(int i = 0; i < n; i++) 
        cout << ans[i] << " ";  // Print the elements of the result array

    return 0;
}

/*
Example:

Input:
5
1 2 3 4 5

Explanation:
1. The input array is: [1, 2, 3, 4, 5]
2. The prefix array is calculated as:
   prefix[0] = 1, prefix[1] = 1 * 2 = 2, prefix[2] = 2 * 3 = 6, prefix[3] = 6 * 4 = 24, prefix[4] = 24 * 5 = 120
   So, prefix array becomes: [1, 2, 6, 24, 120]

3. The suffix array is calculated as:
   suffix[4] = 5, suffix[3] = 5 * 4 = 20, suffix[2] = 20 * 3 = 60, suffix[1] = 60 * 2 = 120, suffix[0] = 120 * 1 = 120
   So, suffix array becomes: [120, 120, 60, 20, 5]

4. The result array is calculated as:
   ans[0] = suffix[1] = 120
   ans[4] = prefix[3] = 24
   ans[1] = prefix[0] * suffix[2] = 1 * 60 = 60
   ans[2] = prefix[1] * suffix[3] = 2 * 20 = 40
   ans[3] = prefix[2] * suffix[4] = 6 * 5 = 30
   So, result array becomes: [120, 60, 40, 30, 24]

Output:
120 60 40 30 24
*/

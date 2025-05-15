#include<iostream>
using namespace std;

/*
Input:
5
2 0 1 4 3

Explanation:
Original array (arr):      [2, 0, 1, 4, 3]
Index positions:            0  1  2  3  4

We are storing: ans[val] = index

So:
val = 2 → ans[2] = 0
val = 0 → ans[0] = 1
val = 1 → ans[1] = 2
val = 4 → ans[4] = 3
val = 3 → ans[3] = 4

Final ans array:
ans = [1, 2, 0, 4, 3]

Output:
1 2 0 4 3
*/


int main() {
    int n;
    cin >> n; // Input the size of the array

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i]; // Input the array elements

    int ans[n]; // Array to store the result

    // Mapping: for each value in arr[], store its index at ans[value]
    for(int i = 0; i < n; i++) {
        int val = arr[i];  // Current value
        int index = i;     // Current index
        ans[val] = index;  // Store index at the position 'val'
    }

    // Output the transformed array
    for(int i = 0; i < n; i++)
        cout << ans[i] << " ";

    cout << endl;
    return 0;
}

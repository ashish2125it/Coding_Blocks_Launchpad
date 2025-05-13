#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    int prefix[n];

    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 1: Compute Prefix Sum Array
    int sum =0;
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) {
        sum += arr[i];
        prefix[i] = sum;
    }

    // Step 2: Print Prefix Sum Array
    cout << "Prefix Sum Array:\n";
    for (int i = 0; i < n; i++) {
        cout << prefix[i] << " ";
    }
    cout << "\n";

   
    return 0;
}


/*
====================================
📌 Example Input and Output:
====================================

Input:
Enter the size of array: 5
Enter the array elements:
1 2 3 4 5

Prefix Sum Array:
1 3 6 10 15

Enter range [l r] to find sum (0-based indexing): 1 3
Sum from index 1 to 3 = 9

Explanation:
arr = [1, 2, 3, 4, 5]
Sum of arr[1] to arr[3] = 2 + 3 + 4 = 9
====================================
*/

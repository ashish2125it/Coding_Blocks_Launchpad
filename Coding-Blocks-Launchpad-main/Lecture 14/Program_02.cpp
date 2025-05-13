#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int target;
    cin>>target;

    int nums[n];
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int cnt= 0;

    // 🔁 Try every combination of 3 distinct elements
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (nums[i] + nums[j] + nums[k] == target) {
                    cnt++;
                }
            }
        }
    }

    
  
   
    //  Output the total count
    cout << "Total unique triplets: " << cnt << endl;

    return 0;
}


/*
==============================
📌 Example Input and Output:
==============================

Input:
Enter the number of elements in the array: 6
Enter the elements:
-1 0 1 2 -1 -4

Triplets that sum to 0:
-1 -1 2
-1 0 1

Total unique triplets: 2

Explanation:
- (-1) + (-1) + 2 = 0
- (-1) + 0 + 1 = 0
These are the only unique combinations that satisfy the condition.

*/

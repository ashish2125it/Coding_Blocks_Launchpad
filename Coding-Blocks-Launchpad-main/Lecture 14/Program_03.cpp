#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Step 1: Find the total product of all elements
    int totalProduct = 1;
    for (int i = 0; i < n; i++) {
        totalProduct *= nums[i];
    }

    // Step 2: Create result array by dividing total product by each element
    int result[n];
    for (int i = 0; i < n; i++) {
        result[i] = totalProduct / nums[i];
    }

    // Output the result
    cout << "Product of array except self:"<<endl;
    for (int i=0;i<n;i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}


/*
==============================
 Example Input and Output:
==============================

Input:
Enter the number of elements: 4
Enter the elements:
1 2 3 4

Output:
Product of array except self:
24 12 8 6

Explanation:
Total Product = 1 * 2 * 3 * 4 = 24
- result[0] = 24 / 1 = 24
- result[1] = 24 / 2 = 12
- result[2] = 24 / 3 = 8
- result[3] = 24 / 4 = 6
*/

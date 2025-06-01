#include <iostream>
#include <vector>
using namespace std;

// Function to merge two sorted arrays
vector<int> mergeSortedArrays(const vector<int>& arr1, const vector<int>& arr2) {
    int n = arr1.size();
    int m = arr2.size();

    vector<int> mergedArray;
    int i = 0, j = 0;

    // Merge process using two pointers
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            mergedArray.push_back(arr1[i]);
            i++;
        } else {
            mergedArray.push_back(arr2[j]);
            j++;
        }
    }

    // Add remaining elements of arr1
    while (i < n) {
        mergedArray.push_back(arr1[i]);
        i++;
    }

    // Add remaining elements of arr2
    while (j < m) {
        mergedArray.push_back(arr2[j]);
        j++;
    }

    return mergedArray;
}

int main() {
    int n, m;

    // Input for first array
    cout << "Enter the size of first sorted array: ";
    cin >> n;
    vector<int> arr1(n);
    cout << "Enter " << n << " sorted elements for the first array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    }

    // Input for second array
    cout << "Enter the size of second sorted array: ";
    cin >> m;
    vector<int> arr2(m);
    cout << "Enter " << m << " sorted elements for the second array:\n";
    for (int i = 0; i < m; ++i) {
        cin >> arr2[i];
    }

    // Merge the arrays
    vector<int> result = mergeSortedArrays(arr1, arr2);

    // Output the merged array
    cout << "Merged Sorted Array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

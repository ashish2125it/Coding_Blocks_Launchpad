#include<iostream>
#include<unordered_map>
using namespace std;

int main () {
    
    int n;
    cin >> n;  // Input the size of the array

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];  // Input array elements

    unordered_map<int, int> mp;

    // Count frequency of each element
    for(int i = 0; i < n; i++)
        mp[arr[i]]++;

    // Check for the majority element
    // Majority element is the one that appears more than n/2 times
    for(auto it : mp) {
        if(it.second > (n / 2)) {
            cout << it.first << " ";  // Print the majority element
            break;  // Only one majority element exists, so we can break
        }
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n], sum = 0;

    cout << "Enter the elements of the array:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i]; // Add each element to sum
    }

    cout << "Sum of array elements: " << sum << endl;
    return 0;
}

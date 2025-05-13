#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int minVal = arr[0]; // Assume first element is min
    for(int i = 1; i < n; i++) {
        if(arr[i] < minVal)
            minVal = arr[i]; // Update min
    }

    cout << "Minimum element: " << minVal << endl;
    return 0;
}

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

    int maxVal = arr[0]; // Assume first element is max
    for(int i = 1; i < n; i++) {
        if(arr[i] > maxVal)
            maxVal = arr[i]; // Update max
    }

    cout << "Maximum element: " << maxVal << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n], reversed[n];
    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // Store reverse in a new array
    int index =0;
    for(int i = n-1; i>=0; i--) {
        reversed[index] = arr[i];
        index++;
    }

    cout << "Reversed array:\n";
    for(int i = 0; i < n; i++)
        cout << reversed[i] << " ";

    cout << endl;
    return 0;
}

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

    int visited[n] = {0}; // To track already checked elements
    int duplicateCount = 0;

    for(int i = 0; i < n; i++) {
        if(visited[i])
            continue; // Skip already processed elements

         int check =0;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                visited[j] = 1 ; // Mark duplicate
                check = 1;
            }
        }

        if(check==1)
            duplicateCount++;
    }

    cout << "Number of duplicate elements: " << duplicateCount << endl;
    return 0;
}

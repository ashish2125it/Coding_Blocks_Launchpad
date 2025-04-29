#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Input the number of rows

    /*
    Pattern:
    For n = 5:
    1 2 3 4 5
    1 2 3 4 *
    1 2 3 * * *
    1 2 * * * * *
    1 * * * * * * *
    */
   
    for(int i = 1; i <= n; i++)
    {
        // Calculate how many numbers to print in the row
        int number_of_times = n - i + 1;

        // Print numbers starting from 1 to number_of_times
        for(int j = 1; j <= number_of_times; j++)
            cout << j << " ";

        // Calculate how many stars (*) to print in the row
        // Formula: (2 * (i - 1)) - 1
        // But since you want increasing odd stars: 1, 3, 5, 7,...
        // So it's actually: 2 * (i - 1) + 1 = (2*i - 1)
        int star_count = 2 * (i - 1) + 1;

        // Print star_count number of stars
        for(int j = 1; j <= star_count; j++)
            cout << "* ";

        cout << endl; // Move to the next row
    }

    return 0;
}

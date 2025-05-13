#include <iostream>
using namespace std;

int main()
{
    
    int N ;
	cin>>N;

// 	           1 
//         2 1   1 2 
//     3 2 1       1 2 3 
// 4 3 2 1           1 2 3 4 
//     3 2 1       1 2 3 
//         2 1   1 2 
//             1 


    int totalRows = N;
    int currentRow = 1;

    // 'numStars' is the number of values (stars) in a row
    int numStars = 1;

    // 'numSpacesLeft' is the number of spaces before the first set of stars
    int numSpacesLeft = totalRows - 1;

    // 'numSpacesMiddle' is the number of spaces between the two sets of stars
    int numSpacesMiddle = -1;

    int leftValue = currentRow;
    int rightValue = 1;

    // Loop through each row
    for (currentRow = 1; currentRow <= totalRows; currentRow++) {
        // Print spaces before the first set of stars
        for (int leftSpaces = 1; leftSpaces <= numSpacesLeft; leftSpaces++) {
            cout << " " << " ";
        }

        // Print the first set of values (stars)
        for (int leftStars = 1; leftStars <= numStars; leftStars++) {
            cout << leftValue << " ";
            leftValue--;
        }

        // Print spaces between the two sets of stars
        for (int middleSpaces = 1; middleSpaces <= numSpacesMiddle; middleSpaces++) {
            cout << " " << " ";
        }

        // Print the second set of values (stars) if it's not the first or last row
        if (currentRow != 1 && currentRow != totalRows) {
            for (int rightStars = 1; rightStars <= numStars; rightStars++) {
                cout << rightValue << " ";
                rightValue++;
            }
        }
        cout << endl;

        // Update the values for the next row
        if (currentRow <= totalRows / 2) {
            numStars++;
            numSpacesLeft -= 2;
            numSpacesMiddle += 2;
            leftValue = currentRow + 1;
            rightValue = 1;
        }
        else {
            numStars--;
            numSpacesLeft += 2;
            numSpacesMiddle -= 2;
            leftValue = totalRows - currentRow;
            rightValue = 1;
        }
    }

    return 0;
}

#include <iostream>
using namespace std;

/*
Find largest of N numbers
*/

int main() {
    int N; 
    cin >> N;
    int max = 0;
    for (int i = 1; i <= N; i++) {
        int num;
        cin >> num;
        if (num > max) {
            max = num;
        } 
    }
    cout << max;
}
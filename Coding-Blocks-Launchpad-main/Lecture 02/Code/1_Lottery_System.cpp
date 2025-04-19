#include <iostream>
using namespace std;

/*
For, n>30 and n<50, person will win a “Bike”
For, n>100 and n<150, person will win a “Kurkure”
For, n>200 and n<400, person will win a “Macbook”
For, n>400 and n<500, person will win a “Car”
For all other values of n, print “Happy Birthday”
*/

int main(){
	int n = 190;
	if (n > 30 && n < 50) {
		cout << "Bike";
	}
	else if (n > 100 && n < 150) {
		cout << "Kurkure";
	}
	else if (n > 200 && n < 400) {
		cout << "MacBook";
	}
	else if (n > 400 && n > 500) {
		cout << "Car";
	}
	else {
		cout << "Happy Birthday";
	}
	return 0;	
}
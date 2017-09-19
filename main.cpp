// Practice Program //
// Christian Paine //

#include <iostream>
using namespace std;


int main(int numbOne, int numbTwo)
{
	cout << "Please enter two different numbers." << "\n";

	cin >> numbOne;
	cout << "\n";
	cin >> numbTwo;

	cout << "The sum of your two numbers is:  " << numbOne+numbTwo << "\n";
	system("pause");

	if (numbOne+numbTwo >= 100) {
		cout << numbOne+numbTwo << " ....That's a big effing number!";
		system("pause");
	}
	else {
		cout << numbOne+numbTwo << "....The number is too small. Try again" << "\n";
		system("pause");
	}

	return 0;
}
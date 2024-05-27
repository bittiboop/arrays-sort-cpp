#include <iostream>
using namespace std;

int factorial(int factnum);

int main() {
	int factnum;
	cout << "Enter the number from what you want to get factorial: ";
	cin >> factnum;
	cout << factnum << "! is: " << factorial(factnum) << endl;

	return 0;
}
int factorial(int factnum) {
	if(factnum > 1)
		return factnum * factorial(factnum - 1);
	else if(factnum == 1)
		return 1;
	else if(factnum == 0)
		return 0;
}
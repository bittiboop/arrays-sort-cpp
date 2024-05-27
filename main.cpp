#include <iostream>
#include <cmath>
using namespace std;

void add(int exp, int base) {
	cout << pow(base, exp);
	return;
}
int main() {
	int exp, base;
	cout << "Enter the exponent of power: ";
	cin >> exp;
	cout << "Enter the base of power: ";
	cin >> base;
	add(exp, base);
	
	return 0;
}
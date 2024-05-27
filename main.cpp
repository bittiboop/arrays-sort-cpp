#include <iostream>
#include <cmath>
using namespace std;

void add(int num);

int main() {
	int num;
	cout << "Enter the number to know the cube of it: ";
	cin >> num;
	add(num);

	return 0;
}
void add(int num) {
	cout << pow(num, 3);
	return;
}
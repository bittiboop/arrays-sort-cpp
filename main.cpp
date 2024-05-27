#include <iostream>
using namespace std;

void add(int num1, int num2);

int main() {
	int num1, num2;
	cout << "Enter the number one and two: ";
	cin >> num1 >> num2;
	add(num1, num2);

	return 0;
}
void add(int num1, int num2) {
	if (num1 > num2) {
		cout << "The number " << num1 << " is greater than the number" << num2 << endl;
	}
	if (num1 < num2){
		cout << "The number " << num1 << " is less than the number "  << num2 << endl;
	}
	return;
}
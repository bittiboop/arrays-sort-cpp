#include <iostream>
using namespace std;

void add(int num) {
	if (num < 0)
	{
		cout << "False!";
	}
	if (num >= 0)
	{
		cout << "True!";
	}
	return;
}
int main() {
	int num;
	cout << "Enter the number: ";
	cin >> num;
	add(num);
	
	return 0;
}
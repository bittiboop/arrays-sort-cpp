#include <iostream>
using namespace std;

void add(int num);

int main() {
	int num;
	cout << "Enter the number to know prime its or not: ";
	cin >> num;
	add(num);

	return 0;
}
void add(int num) {
	bool isPrime = true;
	for (int i = 2; i <= num / 2; i++) {
		if (num % i == 0) {
			isPrime = false;
			break;
		}
	}
	if (num == 0 || num == 1)
	{
		isPrime = false;
	}
	if(isPrime)
		cout << num << " is a prime number." << endl;
	else
		cout << num << " is not a prime number." << endl;
	return;
}
#include <iostream>

using namespace std;

void add(int strt, int end) {
	int sum = 0;
	for (int i = strt; i <= end; i++) {
		sum += i;
	}
	cout << "The sum of the numbers in the range is: " << sum << endl;
	return;
}
int main() {
	int strt, end;
	cout << "Enter the start of the range: ";
	cin >> strt;
	cout << "Enter the end of the range: ";
	cin >> end;
	add(strt, end);
	
	return 0;
}
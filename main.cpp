#include <iostream>

using namespace std;

void add(int strt, int end) {
	int perf = 0;
	for (int i = strt; i <= end; i++) {
		if (i == 1) {
			continue;
		}
		if (i == 6 || i == 28 || i == 496 || i == 8128 || i == 33550336) {
			perf++;
			cout << i << endl;
		}
	}
	cout << "The perfect numbers between " << strt << " and " << end << " are: " << perf << endl;
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
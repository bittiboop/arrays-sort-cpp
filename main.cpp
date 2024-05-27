#include <iostream>
#include <iomanip>
using namespace std;

void add(int cardind) {
	cin >> cardind;
	if (cardind > 0 && cardind < 11) {
		cout << char(218);
		for (int i = 0; i < 20; i++) {
			cout << char(196);
		}
		cout << char(191) << endl;
		cout << char(179) << cardind;
		for (int i = 0; i < 10; i++) {
			cout << "-" << setw(2);
		}
		cout << char(179) << endl;
		}
	else {
		cout << "Your`e kidding me, right?";
	}
	return;
}
int main() {
	int cardind;
	cout << "Enter the card: ";
	cin >> cardind;
	add(cardind);
	
	return 0;
}
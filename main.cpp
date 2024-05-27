#include <iostream>
using namespace std;
void add(int height, int width) {
	for (size_t i = 0; i < height; i++) {
		for (size_t j = 0; j < width; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return;
}
int main() {
	int height, width;
	cout << "Enter the height and width of the rectangle: ";
	cin >> height >> width;
	add(height, width);

	return 0;
}
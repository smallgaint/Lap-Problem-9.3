#include <iostream>

using namespace std;

void displayRun(int values[], int size);

int main() {
	const int SIZE = 10;
	int array[SIZE] = {5, 5, 5, 20, 25, 30, 30, 40, 45, 45};
	displayRun(array, SIZE);
	return 0;
}

void displayRun(int values[], int size) {
	for (int i = 0; i < size; i++) {
		if (values[i] == values[i + 1]) {
			if (i == 0 || values[i] != values[i - 1]) {
				cout << "(";
			}
		}
		cout << values[i];
		if (i > 0 && values[i] == values[i - 1]) {
			if (i == size - 1 || values[i] != values[i + 1]) {
				cout << ")";
			}
		}
		cout << " ";
	}
}
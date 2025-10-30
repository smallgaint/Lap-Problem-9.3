#include <iostream>

using namespace std;

void displayRun(int values[], int size);
bool hasRun(int values[], int size);

int main() {
	const int SIZE = 20;
	int array[SIZE];

	srand(time(0));

	while (true) {
		for (int i = 0; i < SIZE; i++) {
			array[i] = rand() % 6 + 1;
		}

		if (hasRun(array, SIZE)) {
			cout << "has run: ";
			displayRun(array, SIZE);
			return 0;
		}
		else {
			cout << "no run: ";
			displayRun(array, SIZE);
			cout << endl;
			
		}
	}
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

bool hasRun(int values[], int size) {
	for (int i = 0; i < size - 1; i++) {
		if (values[i] == values[i + 1]) {
			return true;
		}
	}
	return false;
}
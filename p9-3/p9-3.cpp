#include <iostream>

using namespace std;

void displayRun(int values[], int size);
bool hasRun(int values[], int size);

int main() {
	const int SIZE = 10;
	int array[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 55};
	if(hasRun(array, SIZE)) {
		displayRun(array, SIZE);
	} else {
		cout << "The array does not have a run." <<  endl;
	}
	
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

bool hasRun(int values[], int size) {
	for (int i = 0; i < size - 1; i++) {
		if (values[i] == values[i + 1]) {
			return true;
		}
	}
	return false;
}
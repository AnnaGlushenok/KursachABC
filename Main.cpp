#include <iostream>
#include "Eiler.h"

using namespace std;

int main() {
	int a = 0, b = 1, h = 0.1;

	for (int i = a; i < b; i += h) {
		cout << y(PI / 2 + i, i, 0.1) << "\n";
	}

	return EXIT_SUCCESS;
}
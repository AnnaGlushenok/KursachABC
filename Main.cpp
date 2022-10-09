#include <iostream>
//#include "Eiler.h"
#include "Runge.h"

using namespace std;

double mainFunc(double x) {
	return (sin(x) - 1) * x;
}

int main() {
	double a = PI / 2, b = 10, h = 0.1;

	double Y = runge(a, 0, 0.1);
	cout << a << "\t" << 0 << "\t" << mainFunc(0) << endl;
	for (double i = a + h; i < b; i += h) {
		cout << i << "\t" << Y << "\t" << mainFunc(i) << endl;
		Y = runge(i, Y, 0.1);
	}

	return EXIT_SUCCESS;
}

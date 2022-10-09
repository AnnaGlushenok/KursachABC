#pragma once
#include <cmath>

#define PI 3.14159265358979

double func(double x, double y) { // f(x,y)
	double c = cos(x);
	if (x == PI / 2 || x == 3 * PI / 2)
		c = 0;

	return y / x + x * c;
}
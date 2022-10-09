#pragma once
#include "Func.h"

using namespace std;

/*
TASK:            y = x(y' - xcos(x))
FINAL TASK:      y'= y/x + xcos(x)
CONDITION:       y(PI/2) = 0
ANSWER:          y = (sin(x) - 1)x

MAIN FORMULA:    Yi+1 = Yi + h/6(K1 + 2K2 + 2K3 + K4)
*/

double* getK(double x, double y, double h) {//stack
	double* arr = new double[4];
	arr[0] = func(x, y);							//k1
	arr[1] = func(x + h / 2, y + h * arr[0] / 2);	//k2
	arr[2] = func(x + h / 2, y + h * arr[1] / 2);	//k3
	arr[3] = func(x + h, y + h * arr[2]);			//k4
	return arr;
}

double dY(double x, double y, double h) { // Yi + h/6(K1 + 2K2 + 2K3 + K4)
	double* arr = getK(x, y, h);
	return h / 6 * (arr[0] + 2 * arr[1] + 2 * arr[2] + arr[3]);
}

double runge(double x, double y, double h) {
	double Y = dY(x, y, h);
	return y + Y;
}
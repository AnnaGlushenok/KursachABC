#pragma once
#include "Func.h"

using namespace std;

/*
TASK:            y = x(y' - xcos(x))
FINAL TASK:      y'= y/x + xcos(x)
CONDITION:       y(PI/2) = 0
ANSWER:          y = (sin(x) - 1)x

MAIN FORMULA:    Yi+1 = Yi + hf( Xi+h/2 ; Yi + h/2f(Xi,Yi))
*/

double newX(double x, double h) { //X = Xi+h/2
	return x + h / 2;
}

double partF(double x, double y, double h) { //Y = Yi + h/2f(Xi,Yi)
	double f = func(x, y);
	return y + h / 2 * f;
}

double eiler(double x, double y, double h) {//main formula
	double X = newX(x, h);		// X = Xi+h/2
	double Y = partF(x, y, h);  // Y = Yi + h/2f(Xi,Yi)
	double f = func(X, Y);		// f(x,y)
	y = y + h * f;				// Yi + hfunc( newX(x,h) ; partF(x,y,h))
	return y;
}
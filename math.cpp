#include <iostream>
#include <cmath>
#include "Math.h"


double MyMath::sum(double value1, double value2) { return value1 + value2; }
double MyMath::diference(double value1, double value2) { return value1 - value2; }
double MyMath::multiplication(double value1, double value2) { return value1 * value2; }
double MyMath::division(double value1, double value2) { return value1 / value2; }
double MyMath::exponen(double value1, double value2) { return std::pow(value1, value2); }
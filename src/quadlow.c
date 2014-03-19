#include "quadratic.h"

double sqrt_calc(double num){
	return sqrt(num);
}

double string_to_double(char const *string){
	double num;
	num=strtod(string, NULL);
	return num;
}
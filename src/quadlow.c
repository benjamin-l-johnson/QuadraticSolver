#include "quadratic.h"

double sqrt_calc(double num)
{
	return sqrt(num);
}

double string_to_double(char *string)
{
	double num;
	num=strtod(string, NULL);
	return num;
}

double test_nan(double a)
{
	if(a != a)
	{
		return -1;
	}
	else
	{
		return a;
	}
}
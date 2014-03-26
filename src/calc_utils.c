#include "calc_quad.h"

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

//Returns -1 upon too much input
int validate_input(char *input, double *abc)
{
	
	if(sscanf(input, "%lf %lf %lf\n",&abc[0],&abc[1],&abc[2]) != 3)
	{
		return -1;
	}

	return 0;
}
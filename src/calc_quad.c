#include "quadratic.h"

double calc_quad(double a, double b, double c)
{
	double x;
	x = (-b + sqrt_calc((b*b) - 4 * ( a * c )))/( 2 * a );
	
	return x;
}

double calc_determ(double* abc)
{
	 return (abc[1] * abc[1]) -4*abc[0]*abc[2];
}
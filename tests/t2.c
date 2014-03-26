/*
* t2.c
* Unit tests for quad_roots()
* qsolve() solves a * x^2 + b x + c = 0
*   for the roots
* x1 and x2
* 
* This uses the mock qsolve_sqrt() funcxetion in mock_sqrt.c,
* which does not call sqart()
*
* Both of trhese unit test pass. For examples, it's more fun to 
* make them fail.
*/
#include <stdio.h>
#include <stdlib.h>
#include "cunit.h"
#include "mock_calc_quad.h"



int main() {

int	ret;     // return value from qsolve_roots
double  a, b, c; // scratch variables
double  x1, x2;  // scratch variables
int	count;	 // number of times the mock object qsolve_sqrt(0 is called.
double	x;	 // arguement passed to qsolve_sqrt()
char	str[100];// messsaage for assert() 
double	d;	 // scratch for discriminate
double	sqrtd;	 // scratch for sqrt(d) 
double abc[3]={0,0,0};

// initialize the unit testing framework
cunit_init();

//  A single test using the mock object for qsolve_sqrt()
//  Should have x1 = 3.0 and x2 = 1.0, except for roundoff
//   We expect  d =  b^2 - 4*a*c =  4.0 and 
//              sqrt(d) returned should be 2.0
//  In this special case we will ytry to have the error actually == 0.0.,
//  both in the qsove_sqrt(I) mock object and for the returned roots!
//  This is not often the case.
mock_setup_calc_quad( 4.0, 2.0, 0.0);
//
//// This looks like a check of qsolve_sqart()
abc[0] = 1.0;
abc[1] = -4.0;
abc[2] = 3.0;

calc_quad(abc);
assert_eq("ret",abc[0],2);
assert_feq("x1",abc[1],3.0);
assert_feq("x2",abc[2],1.0);
//
ret= mock_check_calc_quad(&count, &x);
// fprintf(stderr, "%d\n",ret );
snprintf(str, 99, "count ret = %d x =%20.61e", count, x);
assert_eq(str, ret , 1);


//
// A "good" unit test, need to allow for round off!
// qsolve_roots() passes this one. ;-)
// This allows about one base 10 least significant digit of error
// (x - x1)*(x - x2) = 0
/*x1 = 3.1;
x2 = 3.3;
a = coefs.a = 1.0;
b = coefs.b = -x1 + -x2;
c = coefs.c = x1*x2;

d = b*b - 4.0*a*c;
sqrtd = sqrt(d);

//
mock_setup_qsolve_sqrt( d, sqrtd, cunit_dmacheps*2.0*d);
//
ret = qsolve_roots(&coefs, &roots);
assert_eq("ret",ret,2);
assert_feqrerr("x1",roots.x1, x2, 2.0*cunit_dmacheps*3.3 );
assert_feqrerr("x2",roots.x2, x1, 2.0*cunit_dmacheps*3.1 );
//
ret= mock_check_qsolve_sqrt( &count, &x);
snprintf(str, 99, "count ret = %d x =%20.61e", count, x);
assert_eq(str, ret , 1);*/

exit(0);
}




#include <math.h>
#include "mock_calc_quad.h"
#include "calc_quad.h"


static double x     = -1.0;  
static double ex    = -1.0;  
static double eps   = -1.0;  
static double sqrtx = -1.0;  
static int    count = 0;     
static int    flag  = -1;


void mock_setup_calc_quad(double lx, double lsqrtx, double leps) {
ex = x;
eps = leps;
sqrtx = lsqrtx;
count = 0;
flag=0;
}

double calc_quad(double lx) { 
if(fabs(ex- lx) > eps) {
  flag=1;
}
x = lx;
count++;
return sqrtx; 
}

int mock_check_calc_quad(int *lcount,  double *lx) {
int	ret;
*lcount = count;
*lx = x;
if((flag == 0) && (count==1)) {
  ret = 0;
} else {
  ret = 1;
}
return ret; 
}

void mock_teardown_calc_quad() {
x = -1.0;
ex = -1.0;
eps = -1.0;
sqrtx = -1.0;
count = 0;
flag  = -1;
return ;
}

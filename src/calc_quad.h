#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


#define ENABLE_DEBUG 1

//some macros with help from the web
#if ENABLE_DEBUG
    #define LOG_MSG(M,...) fprintf(stderr, "DEBUG %s:%d: " M "\n",__FILE__,__LINE__, ##__VA_ARGS__)
#endif

double* calc_quad(double*);
double sqrt_calc(double);
double string_to_double(char*);
double test_nan(double);
int validate_input(char*,double*);
double calc_determ(double*);
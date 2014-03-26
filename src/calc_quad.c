#include "calc_quad.h"

//The calc_quad class takes a 
//pointer to an array of 3 doubles
//it will return the same array with 
//modified values the first number will
//be the return code 2,1,0,-1 if it
//is a two that means there are two
//real roots if it is a 1 that means 2
//real roots of the same size were found
//......and so on

double* calc_quad(double *abc)
{
	double x1,x2,d=0;
	x1=0;
	x2=0;
	d = calc_determ(abc);
	//LOG_MSG("hi");
			LOG_MSG("d = %lf",d);


	if (abc[0]==0)
	{
		printf("Variable A is zero, this is a linear equation\n");
		
		x1=(0-abc[2])/abc[1];
		abc[0]=0;
		abc[1]=x1;
		abc[2]=0;
		return abc;
	}
	else if(d==0)
	{	

     		x1=-abc[1]/(2.0*abc[0]);
     		abc[0] = 1;
     		abc[1] = x1;
     		abc[2] = x1;
     		return abc;
	}
   	else if(d>0)
	{
  	//roots are real
		x1= (-abc[1] + sqrt_calc( d ) )/ ( 2 * abc[0] );
		x2= (-abc[1] - sqrt_calc( d ) ) / ( 2 * abc[0] ); 

		abc[0] = 2;
		abc[1]= x1;
		abc[2]= x2;
		return abc;

	}
	else
	{		
			//no roots
			abc[0]=-1;
			abc[1]=0;
			abc[2]=0;

   		return abc;
  }

	
}


double calc_determ(double* abc)
{
	 return (abc[1] * abc[1]) -4*abc[0]*abc[2];
}
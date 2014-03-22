#include "quadratic.h"

int main(int argc, char *argv)
{	
	//printf("%d\n", argc );
	char * input;
	size_t size = 0;
	double a,b,c,x1,x2, linans;
	char* strA,strB,strC,check;
	strA=NULL;
	strB=NULL;
	strC=NULL;
	check=NULL;
	switch(argc)
	{
		//they entered no command line args
		case 1:
			printf("Enter Variables a b and c in a space seprated string");
			getline(&input,size,stdin);
	}
	printf("a=%.8lf, b=%.8lf, c=%.8lf\n",a,b,c );

	if (a==0)
	{
		printf("Variable a is zero, this is a linear equation\n");
		linans=(0-c)/b;
		printf("x=%.8lf\n", linans);
	}
	else	
	{
		if(((b*b)-4*(a*c))>=0)
		{	
			x1=(calc_quad(a,b,c));
			x2=(calc_quad(a,b,c));
			printf("x1=%.8lf\n", x1);
			printf("x2=%.8lf\n", x2);
		}
	
	  	else
	  		printf("Answer is not a real solution, but rather a complex solution\n");
  	}
	return 0;
}
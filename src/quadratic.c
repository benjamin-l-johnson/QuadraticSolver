#include "quadratic.h"

int main(int argc, char const *argv[])
{	
	//printf("%d\n", argc );
	char * input;
	size_t size = 0;
	double a,b,c,x1,x2, linans;
	char *strA =0;
	char *strB = 0;
	char *strC = 0;
	char *check = 0;

	
	printf("Enter the values of a,b,c seperated by spaces:\n");
	
	//getline mallocs for you 
	getline(&input,&size,stdin);

	sscanf(input,"%s %s %s %s", strA,strB,strC, check);
	fprintf(stderr, "%s %s  %s\n",strA,strB,strC );
	if(check)
	{
		fprintf(stderr, "You entered to many Variables\n" );
		exit(-1);
	}	
	a = string_to_double((const char *) strA);
	b = string_to_double((const char *) strB);
	c = string_to_double((const char *) strC);
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
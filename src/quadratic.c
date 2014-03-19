#include "quadratic.h"

int main(int argc, char const *argv[])
{	printf("%d\n", argc );
	double a,b,c,x1,x2, linans;
	if(argc==1)
	{
		printf("Enter variable A\n");
		scanf("%lf",&a);
		printf("Enter variable B\n");
		scanf("%lf",&b);
		printf("Enter variable C\n");
		scanf("%lf",&c);
	}
	else
	{
		a=string_to_double(argv[1]);
		b=string_to_double(argv[2]);
		c=string_to_double(argv[3]);
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
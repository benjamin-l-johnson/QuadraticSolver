#include "quadratic.h"

int main(int argc, char **argv)
{	
	//printf("%d\n", argc );
	char * input;
	size_t size = 0;
	double a,b,c,d,x1,x2, linans;
	double abc[3];

	switch(argc)
	{
		//they entered no command line args
		case 1:
			printf("Enter Variables a b and c in a space seprated string\n");
			getline(&input,&size,stdin);
			if(validate_input(input,abc))
			{
				fprintf(stderr, "incorrect args \n");
				exit(0);
			}
			printf("%s\n",input);
			break;

		//they entered one large string 
		case 2:
			if(validate_input(argv[1],abc))
			{
				fprintf(stderr, "incorrect args \n");
				exit(0);
			}

			break;

		default:
			fprintf(stderr, "Unkown variable input");
			exit(0);
			break;
	}

	a = abc[0];
	b = abc[1];
	c = abc[2];
	
	d = calc_determ(abc);

	if (a==0)
	{
		printf("Variable A is zero, this is a linear equation\n");
		linans=(0-c)/b;
		printf("x=%.8lf\n", linans);
	}
	else if(d==0)
	{	
			printf("roots are equal\n");
     		x1=-b/(2.0*a);
     		x2=x1;
     		printf("First  Root x1= %f\n",x1);
     		printf("Second Root x2= %f\n",x2);

	}
   	else if(d>0)
	{
  		printf("Roots are real\n");
		x1=(calc_quad(a,b,c));
		x2=(calc_quad(a,0-b,c));

		printf("x1=%.8lf\n", x1);
		printf("x2=%.8lf\n", x2);
	}
	else
	{
   		printf("Root are imeginary\n No Solution \n");
  	}
	return 0;
}

int validate_input(char *input, double *abc)
{
	
	if(sscanf(input, "%lf %lf %lf\n",&abc[0],&abc[1],&abc[2]) != 3)
	{
		return -1;
	}

	return 0;
}
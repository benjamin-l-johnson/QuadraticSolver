#include "quadratic.h"

int main(int argc, char **argv)
{	
	//printf("%d\n", argc );
	char * input;
	size_t size = 0;
	double a,b,c,x1,x2, linans;

	char* strA,*strB,*strC,*check;

	switch(argc)
	{
		//they entered no command line args
		case 1:
			printf("Enter Variables a b and c in a space seprated string\n");
			getline(&input,&size,stdin);
			if(sscanf(input, "%lf %lf %lf\n",&a,&b,&c) != 3)
			{
				fprintf(stderr, "incorrect args \n");
				exit(0);
			}
			printf("%s\n",input);
			break;
		//they entered one large string 
		case 2:
			if(sscanf(argv[1], "%lf %lf %lf\n",&a,&b,&c) != 3)
			{
				fprintf(stderr, "incorrect args \n");
				exit(0);
			}

			break;

		//they entered three command line args
		case 4:
			a = string_to_double(argv[1]);
			b = string_to_double(argv[2]);
			c = string_to_double(argv[3]);
			break;

		default:
			fprintf(stderr, "command unknown");
			exit(0);
			break;
	}


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
#include "calc_quad.h"
#include "calc_utils.h"

//This is a main interface class
//
//
//


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

	//
	calc_quad(abc);
	//LOG_MSG("Return code=%lf,x1=%lf,x2=%lf",abc[0],abc[1],abc[2]);
	fprintf(stdout, "x1=%lf,x2=%lf\n",abc[0],abc[1],abc[2]);
	return 0;
}

//Returns -1 upon too much input
int validate_input(char *input, double *abc)
{
	
	if(sscanf(input, "%lf %lf %lf\n",&abc[0],&abc[1],&abc[2]) != 3)
	{
		return -1;
	}

	return 0;
}

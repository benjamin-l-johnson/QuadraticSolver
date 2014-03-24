#include "quadratic.h"

quadraticUI(char *input,double * abc){

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

}
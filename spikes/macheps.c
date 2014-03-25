/*
Wikipedia code to calculate machine epsilon 
*/

#include <stdio.h>
int main( int argc, char **argv )
{
  float machEps = 1.0f;
 
  fprintf(stderr, "current Epsilon, 1 + current Epsilon\n" );
  do 
  {
    fprintf(stderr, "%G\t%.20f\n", machEps, (1.0f + machEps) );
    machEps /= 2.0f;
    // If next epsilon yields 1, then break, because current
    // epsilon is the machine epsilon.
    fprintf("%G\n", (machEps+1)/2);
  }
    
  while ((float)(1.0 + (machEps/2.0)) != 1.0);
 

  printf( "\nCalculated Machine epsilon: %G\n", machEps );
  
  //printf("%G\n", (machEps+1)/2);

  return 0;
 }
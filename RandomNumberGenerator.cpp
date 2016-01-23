#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Random with logic created by Aiden Nielsen in C 1/22/16 */

int main()
{	
	/* Declare Variables */
	int foorand;
	int foocount;
	time_t t;
	
	/* Initialize random number generator */
	srand((unsigned) time(&t));
	
	
	/* Start Loop */
	for ( foocount = 1; foocount < 100; foocount++ )
	{
	
		/* Makes random seed */
	
		foorand = rand() % 100;

		if ( foorand%2 == 0) {
			printf("*");
		}	
		
		if (foorand%16 == 0) {
			printf("*\r\n");
		}
		
		if (foorand%17 == 0) {
			printf("$");
		}
		
		else {
			printf(",");
		}
	/* Loop end */	
	}
	
	return(0);
	
}

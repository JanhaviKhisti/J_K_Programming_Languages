/*
	Pattern No : 03
 
 	*
 	*	*
 	*	*	*
 	*	*	*	*
 	*	*	*	*	*
 
*/

#include <stdio.h>
#include <stdlib.h>

int ole = 0;
int le = 0;

int main(void)
{
	// outer loop
	for(ole = 0; ole < 5; ++ole)
	{
		// inner loop
		for(le = 0; le <= ole; ++le)
		{
			printf("* ");
		}

		printf("\n");

	}

	return(0);

}
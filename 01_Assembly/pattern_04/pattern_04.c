
#include <stdio.h>
#include <stdlib.h>

int ole = 0;
int ile = 0;
int num;

int main(void)
{
	// outer loop
	for(ole = 4; ole >= 0; ole--)
	{
		// inner loop
		for(ile = 5; ile >= 0; ile--)
		{
			if( ile <= ole && ile-ole<= 4 )
			{
				printf("*\t");
			}
			else
				printf("\t");
		}

		printf("\n");
	}
	
	return(0);
}




/**
 * S.G.M.P
 * @file: code_02_03.c
 * @brief: Implementation of a code to find the factors of a number
 * @author: Janhavi Khisti(janhavikhisti@gmail.com)
 * @date: 06 August 2023 (Sunday)
 */

// Headers
#include <stdio.h>
#include <stdlib.h>

// Global Data Definition
int number  = 100;

int main(int argc, char** argv, char** envp)
{
	// Code
	printf("Using For Loop : \n");
	for(int le = 1; le <= number; le++)
	{
		if( 0 == number % le )
		{
			printf("%d is divisible by %d\n", number, le);
		}
	}

	printf("\n");
	printf("Using While Loop : \n");
	int le = 1;
	while(le <= number)
	{
		if( 0 == number % le )
		{
			printf("%d is divisible by %d\n", number, le);
		}

		le++;
	}

	printf("EXIT\n");
	exit(0);

}


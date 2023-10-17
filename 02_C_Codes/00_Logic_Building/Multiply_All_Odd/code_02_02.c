
/**
 * S.G.M.P
 * @file: code_02_02.c
 * @brief: Implementation of multiplication of all odd numbers in a range of 1 to N
 * @author: Janhavi Khisti(janhavikhisti@gmail.com)
 * @date: 06 August 2023 (Sunday) 
 */

// Headers
#include <stdio.h>
#include <stdlib.h>

// Global Data Definition
int limit = 0;
long long result = 0;

int main(int argc, char** argv, char** envp)
{
	// Code
	limit = 20;
	result = 1;
	for(int le = 1; le <= limit; le++)
	{
		if( 0 != le % 2 )
		{
			result = result * le;
		}
	}
	printf("Multiplication of all Odd Number = %lld\n", result);

	printf("EXIT\n");
	exit(0);

}


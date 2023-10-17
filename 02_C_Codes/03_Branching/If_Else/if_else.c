
/**
 * @file: if_else.c 
 * @brief: Demonstration of Branching Statements 'if...else...'
 * @author: Janhavi Khisti(janhavikhisti@gmail.com)
 * @date: 30 July 2023 (Sunday) 
 */

// Headers
#include <stdio.h>
#include <stdlib.h>

// Global Data Definition
int num1 = 20;

int main(void)
{
	// code
	if( 10 == num1 )
	{
		// True block
		printf("num1 is 10\n");
	}
	else
	{
		// False Block
		printf("num1 is not 10\n");
	}

	printf("EXIT");

	exit(0);

}


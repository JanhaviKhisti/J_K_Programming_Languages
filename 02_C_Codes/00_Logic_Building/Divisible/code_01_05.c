
/**
 * S.G.M.P
 * @file: code_01_05.c
 * @brief: Implementation of code to show divisibility by 5 or 3
 * @author: Janhavi Khisti(janhavikhisti@gmail.com)
 * @date: 03 August 2023 (Thursday) 
 */

// Header
#include <stdio.h>
#include <stdlib.h>

// Global Data Definition
int number = 28;

// Entry Point Function
int main(int argc, char** argv, char** envp)
{
	// Code
	if( 0 == number % 5 )
	{
		// True Block
		printf("%d is divisible by 5\n", number);
	}
	else if( 0 == number % 3 )
	{
		// True Block
		printf("%d is divisible by 3\n", number);
	}
	else
	{
		// False Block
		printf("%d is not divisible by 5 and 3\n", number);
	}

	printf("EXIT\n");
	exit(0);
}


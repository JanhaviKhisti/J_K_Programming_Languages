
/**
 * S.G.M.P
 * @file: code_01_02.c
 * @brief: Code to check if number is even or odd
 * @author: Janhavi Khisti(janhavikhisti@gmail.com)
 * @date: 03 August 2023 (Thursday) 
 */

// Headers
#include <stdio.h>
#include <stdlib.h>

// Global Data Definition
int number = 12;

// Entry point function
int main(int argc, char** argv, char** envp)
{
	// Code
	if( 0 == number % 2 )
	{
		// True
		printf("%d is EVEN\n", number);
	}
	else
	{
		// False 
		printf("%d is ODD\n", number);
	}

	printf("EXIT");
	exit(0);
}



/**
 * S.G.M.P
 * @file: code_02_01.c
 * @brief: Implementation of addition of all even numbers in a range of 1 to N
 * @author: Janhavi Khisti(janhavikhisti@gmail.com)
 * @date: 06 August 2023 (Sunday) 
 */

// Headers
#include <stdio.h>
#include <stdlib.h>

// Global Data Definition
int limit = 1000;
int result = 0;

int main(int argc, char** argv, char** envp)
{
	// Code
	for(int le = 1; le <= limit; le++)
	{
		if( 0 == le % 2 )
		{
			// True Block
			result = result + le;
		}
	} 
	printf("Addition of all Even Number = %d\n", result);

	printf("EXIT");
	exit(0);

}


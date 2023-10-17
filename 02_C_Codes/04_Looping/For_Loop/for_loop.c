
/**
 * @file: for_loop.c
 * @brief: Demonstration of looping control flow statements in C using 'for' loop
 * @author: Janhavi Khisti(janhavikhisti@gmail.com)
 * @date: 30 July 2023 (Sunday)
 */

// Headers
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv, char** envp)
{
	// code
	for( int le = 1; le <= 100; ++le)
	{
		printf("le = %d\n", le);
	}

	printf("Exit\n");

	exit(0);

}


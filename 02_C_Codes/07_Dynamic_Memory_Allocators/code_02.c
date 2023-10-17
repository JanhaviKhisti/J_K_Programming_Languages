
/**
 * @file: code_02.c
 * @brief: Demonstration of Dynamic Memory Allocation, Array and Pointers
 * @author: Janhavi Khisti(janhavikhisti@gmail.com)
 * @date: 31/08/2023 
 */

// Headers
#include <stdio.h>
#include <stdlib.h>

// Global Data Definition

// Define a pointer to Integer
// p is a pointer to Integer
int *iptr = NULL;

// Entry Point Function
int main(int argc, char** argv, char** envp)
{
	// Code

	// Define 4 bytes dynamically using malloc
	/**
	 * 	function = malloc	->	Memory Allocation
	 * 	Allocates memory in Heap
	 * 	input	=	Number of bytes
	 * 	output	=	Address
	 */

	iptr = (int*)malloc(4 * 10); // 4 bytes * 10 Objects

	// Access => Read + Write

	//*iptr = 2334523;	//	Write Operation
	for(int le = 0 ; le < 10; ++le)
	{
		iptr[le] = (le+1) * 10;
	}

	/*printf(" iptr = %p\n", iptr);
	printf("*iptr = %d\n", *iptr);*/

	// Read Operation
	for(int le = 0 ; le < 10; ++le)
	{
		printf("iptr[%d] = %d\n", le, iptr[le]);
	}

	free(iptr);
	iptr = NULL;

	exit(0);
}



/**
 * S.G.M.P
 * @file: array_01.c 
 * @brief: Demonstration of array in C
 * @author: Janhavi Khisti(janhavikhisti@gmail.com)
 * @date: 30 July 2023 (Sunday) 
 */

 // Headers
#include <stdio.h>
#include <stdlib.h>

// Defining Array
int inum = 10;

int iarr[500] = {0};

int main(int argc, char** argv, char** envp)
{
	// code

	//	Write operation on array using subscipt operator
	/*
	iarr[0] = 10;
	iarr[1] = 20;
	iarr[2] = 30;
	iarr[3] = 40;
	iarr[4] = 50;
	*/

	// Write operation
	// Loop
	for( int le = 0; le <= 499; le++)
	{
		// loop body
		iarr[le] = le+1;
	}

	// Read operaation
	for( int le = 0; le <= 499; le++)
	{
		// loop body
		printf("iarr[%d] = %d\n", le, iarr[le]);
	}

	exit(0);

}


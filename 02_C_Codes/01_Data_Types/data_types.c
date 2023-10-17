
/**
 * @file: data_types.c
 * @brief: Demonstration of data types used through C Programming Language
 * @author: Janhavi Khisti(janhavikhisti@gmail.com)
 * @date: 30 July 2023 (Sunday) 
 */

// Header Files
#include <stdio.h>
#include <stdlib.h>

// Data Definition Statements

// Definition of 1 byte
char cnum = 'J'; 				// cnum is an object of type character

// Definition of 2 bytes
short snum = 1234; 				// snum is an object of type short

// Definition of 4 bytes
int inum = 98765; 				// inum is an object of type integer

// Definition of 4 bytes(floating value)
float fnum = 123.3456; 			// fnum is an object of type float

// Definition of 8 bytes
long lnum = 22334455667788; 	// lnum is an object of type long

// Definition of 8 bytes(floating value)
double dnum = 124947.12345678;  // dnum is an object of type double

int main(int argc, char** argv, char** envp)
{
	// Code

	// Accessing data of 1 byte
	printf("cnum = %c\n", cnum);

	// Accessing data od 2 bytes
	printf("snum = %hd\n", snum);

	// Accessing data of 4 bytes
	printf("inum = %d\n", inum);

	// Accessing data of 4 bytes(floating value)
	printf("fnum = %f\n", fnum);

	// Accessing data of 8 bytes
	printf("lnum = %ld\n", lnum);

	// Accessing data of 8 bytes(floating value)
	printf("dnum = %lf\n", dnum);

	exit(0);

}


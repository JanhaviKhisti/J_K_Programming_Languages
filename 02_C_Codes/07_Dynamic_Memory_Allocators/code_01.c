
/**
 * @file: code_01.c
 * @brief: Implementation of Dynamic Memory Allocators
 * @author: Janhavi Khisti(janhavikhisti@gmail.com)
 * @date: 20/08/2023 
 */

// Headers
#include <stdio.h>
#include <stdlib.h>

// Global Data Definition
char *cptr = NULL;

short *sptr = NULL;

int *iptr = NULL;

long long *lptr = NULL;

float *fptr = NULL;

double *dptr = NULL;

int main(int argc, char** argv, char** envp)
{
	// Code

	// Allocate memory of 1 byte in heap
	cptr = (char*)malloc(1);
	*cptr = 'M';	// Write value on the object
	printf("cptr = %p\n", cptr);
	printf("*cptr = %c\n", *cptr);	// Read value from the object

	// Allocate memory of 2 byte in heap
	sptr = (short*)malloc(2);
	*sptr = 123;
	printf("sptr = %p\n", sptr);
	printf("*sptr = %hd\n", *sptr);

	// Allocate memory of 4 bytes
	iptr = (int*)malloc(4);
	*iptr = 12345;
	printf("iptr = %p\n", iptr);
	printf("*iptr = %d\n", *iptr);

	// Allocate memory of 4 bytes float
	fptr = (float*)malloc(4);
	*fptr = 123.1234;
	printf("fptr = %p\n", fptr);
	printf("*fptr = %f\n", *fptr);

	// Alocate memory of 8 bytes
	lptr = (long long*)malloc(8);
	*lptr = 129348571243;
	printf("lptr = %p\n", lptr);
	printf("*lptr = %lld\n", *lptr);

	// Allocate memory of 8 bytes float
	dptr = (double*)malloc(8);
	*dptr = 1029347.132948578;
	printf("dptr = %p\n", dptr);
	printf("*dptr = %.10lf\n", *dptr);

	free(dptr);
	dptr = NULL;

	free(lptr);
	lptr = NULL;

	free(fptr);
	fptr = NULL;
	
	free(iptr);
	iptr = NULL;
	
	free(sptr);
	sptr = NULL;

	free(cptr);
	cptr = NULL;

	printf("cptr = %p\n", cptr);
	printf("sptr = %p\n", sptr);
	printf("iptr = %p\n", iptr);
	printf("fptr = %p\n", fptr);
	printf("lptr = %p\n", dptr);
	printf("dptr = %p\n", lptr);

	exit(0);
}





#include <stdio.h>
#include <stdlib.h>

int inum1 = 1234; // Data Section
int *iptr = &inum1; // Data Section
// iptr is an object 
//		of type pointer
//			to integer

int main(int argc, char** argv, char** envp)
{
	// code
	printf("inum1 = %d\n", inum1);
	printf("&inum1 = %p\n\n", &inum1);

	printf("iptr = %p\n", iptr);
	printf("*iptr = %d\n", *iptr);

	exit(0);
}


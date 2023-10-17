
/**
 * @file: conditional_operators.c 
 * @brief: Demonstration of Conditional Operators in C
 * @author: Janhavi Khisti(janhavikhisti@gmail.com)
 * @date: 30 July 2023 (Sunday)
 */

// Headers
#include <stdio.h>
#include <stdlib.h>

// Global Object Definitions
int inum1 = 10;
int inum2 = 20;

int main(void)
{
	// code
	printf("inum1 < inum2 = %d\n", inum1 < inum2);
	
	printf("inum1 > inum2 = %d\n", inum1 > inum2);
	
	printf("inum1 == inum2 = %d\n", inum1 == inum2);
	
	printf("inum1 != inum2 = %d\n", inum1 != inum2);
	
	printf("inum <= inum2 = %d\n", inum1 <= inum2);
	
	printf("inum1 >= inum2 = %d\n", inum1 >= inum2);

	exit(0);

}


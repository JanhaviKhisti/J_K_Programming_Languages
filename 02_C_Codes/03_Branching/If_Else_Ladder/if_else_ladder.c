
/**
 * @file: if_else_ladder.c 
 * @brief: Demonstrations of Branching Statements 'if...else... ladder'
 * @author: Janhavi Khisti(janhavikhisti@gmail.com)
 * @date: 30 July 2023 (Sunday)
 */

 // Headers
 #include <stdio.h>
 #include <stdlib.h>

// Global Data Definition
int color = 999;

int main(void)
{
	// code
	if( 1 == color )
	{
		// True Block 1
		printf("Color is WHITE\n");
	}
	else if( 2 == color )
	{
		// True Block 2
		printf("Color is RED\n");
	}
	else if( 3 == color )
	{
		// True Block 3
		printf("Color is GREEN\n");
	}
	else if( 4 == color )
	{
		// True Block 4
		printf("Color is BLUE\n");
	}
	else
	{
		// False Block
		printf("Color is BLACK\n");
	}

	printf("EXIT");

	exit(0);

}



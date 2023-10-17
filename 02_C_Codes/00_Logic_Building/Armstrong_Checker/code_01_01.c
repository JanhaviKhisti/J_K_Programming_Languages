
/**
 * S.G.M.P
 * @file: code_01_01.c
 * @brief: Implementation of Armstrong Checker
 * @author: Janhavi Khisti(janhavikhisti@gmail.com)
 * @date: 03 August 2023 (Thursday)
 */

// Headers
#include <stdio.h>
#include <stdlib.h>

// Global Data Definition
int number = 153;
int temp = 0;
int no_of_digits = 0;
int remainder = 0;
int multiply_result = 0;
int add_result = 0;

int main(int argc, char** argv, char** envp)
{
	// Code
	
	printf("number = %d\n", number);

	// Calculate no of digits
	temp = number;
	while( 0 != temp )
	{
		// Loop Body
		temp = temp / 10;
		no_of_digits++;
	}

	// Take digit by digit of the number
	temp = number;
	while( 0 != temp )
	{
		// Loop Body
		remainder = temp % 10;
		
		multiply_result = 1;
		
		// Calculate Power of each digit and add them
		for( int le = 1; le <= no_of_digits; ++le )
		{
			multiply_result = multiply_result * remainder;
		}

		add_result = add_result + multiply_result;

		temp = temp / 10;
	}

	if( number == add_result )
	{
		// True Block
		printf("%d is an armstrong number\n", number);
	}
	else
	{
		// False Block
		printf("%d is NOT an armstrong number\n", number);
	}

	printf("EXIT\n");
	exit(0);
}



/**
 * @file: code_01.c
 * @brief: Demonstration of Function Pointers
 * @author: Janhavi Khisti(janhavikhisti@gmail.com)
 * @date: 07/09/2023 
 */

// Headers
#include <stdio.h>
#include <stdlib.h>

// Function Declarations
long long addition(long long, long long);

long long subtraction(long long, long long);

long long multiplication(long long, long long);

long long quotient(long long, long long);

long long remainder(long long, long long);

// Type of all above function = long long (long long, long long)

/**
 * 	Define a pointer 
 * 		to a function
 * 			that takes 2 long long parameters
 * 			and returns long long
 */

long long (*function_ptr)(long long, long long) = NULL;
	
// Function Definitions

// Entry Point Function
int main(int argc, char** argv)
{
	// Code
	long long result = 0;

	printf("\n\n");

	printf("function_ptr = %p\n", function_ptr);

	printf("\n\n");

	// Call to Addition
	result = addition(10, 20);
	printf("Addition = %lld\n", result);

	printf("addition = %p\n", addition);
	function_ptr = addition;	// Here we take the address of addtion function and store it in function_ptr
	printf("function_ptr = %p\n", function_ptr);

	result = function_ptr(25, 75);	// Here we call addition function using the address stored in function_ptr
	printf("Addition call using function_ptr = %lld\n", result);


	printf("\n\n");
	
	// Call to Subtraction
	result = subtraction(222, 345);
	printf("Subtraction = %lld\n", result);

	printf("subtraction = %p\n", subtraction);
	function_ptr = subtraction;
	printf("function_ptr = %p\n", function_ptr);

	result = function_ptr(99, 999);
	printf("Subtraction call using function_ptr = %lld\n", result);

	printf("\n\n");
	
	// Call to Multiplication
	result = multiplication(5, 10);
	printf("Multiplication = %lld\n", result);

	printf("multiplication = %p\n", multiplication);
	function_ptr = multiplication;
	printf("function_ptr = %p\n", function_ptr);

	result = function_ptr(25, 1200);
	printf("Multiplication call using function_ptr = %lld\n", result);

	printf("\n\n");
	
	// Call to Quotient
	result = quotient(99, 5);
	printf("Quotient = %lld\n", result);

	printf("quotient = %p\n", quotient);
	function_ptr = quotient;
	printf("function_ptr = %p\n", function_ptr);

	result = function_ptr(21354, 9);
	printf("Quotient call using function_ptr = %lld\n", result);

	printf("\n\n");
	
	// Call to Remainder
	result = remainder(99, 5);
	printf("Remainder = %lld\n", result);

	printf("remainder = %p\n", remainder);
	function_ptr = remainder;
	printf("function_ptr = %p\n", function_ptr);

	result = function_ptr(21354, 9);
	printf("Remainder call using function_ptr = %lld\n", result);

	exit(EXIT_SUCCESS);
}

// Addition Function Definition
/**
 * 	Identifier : addition
 * 	Type:	long long (long long, long long)
 */	
long long addition(long long num1, long long num2)
{
	// Code
	return( num1 + num2 ); // Returning the result of addition operation
}

// Subtraction Function Definition
/**
 * 	Identifier : subtraction
 * 	Type:	long long (long long, long long)
 */	
long long subtraction(long long num1, long long num2)
{
	// Code
	return(num1 - num2); // Returning the result of subtraciton operation
}

// Multiplication Function Definition
/**
 * 	Identifier : multiplication
 * 	Type:	long long (long long, long long)
 */	
long long multiplication(long long num1, long long num2)
{
	// Code
	return(num1 * num2); // returning the result of multiplication operation
}

// Quotient Function Definition
/**
 * 	Identifier : quotient
 * 	Type:	long long (long long, long long)
 */	
long long quotient(long long num1, long long num2)
{
	// Code
	return(num1 / num2); // returning the Quotient of Division operation
}

// Remainder Function Definition
/**
 * 	Identifier : remainder
 * 	Type:	long long (long long, long long)
 */	
long long remainder(long long num1, long long num2)
{
	// Code
	return(num1 % num2); // returning the Remainder of Division operation
}


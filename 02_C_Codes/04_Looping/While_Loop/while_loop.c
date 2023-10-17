
/**
 * @file: while_loop.c
 * @brief: Demonstration of Looping Control Flow Statements in C using 'while' loop
 * @author: Janhavi Khisti(janhavikhisti@gmail.com)
 * @date: 30 July 2023 (Sunday)
 */

 // Headers
 #include <stdio.h>
 #include <stdlib.h>

int main(int argc, char** argv, char** envp)
{
	// code
	int le  = 1;
	while( le <= 100)
	{
		printf("le = %d\n", le);

		le += 5;
	}

	printf("EXIT\n");

	exit(0);

}


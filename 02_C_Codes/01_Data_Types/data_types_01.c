
/**
 * @file: data_types_01.c
 * @brief: Demonstration of data types used through C Programming Language
 * @author: Janhavi Khisti(janhavikhisti@gmail.com)
 * @date: 30 July 2023 (Sunday) 
 */

#include <stdio.h>
#include <stdlib.h>

char cnum = 'j';
short snum = 1334;
int inum = 87654;
long lnum = 123456789;

float fnum = 132.444;
double dnum = 12345.99999;

int main(int argc, char** argv, char** envp)
{
	// code
	printf("cnum = %c\n", cnum);
	printf("snum = %hd\n", snum);
	printf("inum = %d\n", inum);
	printf("lnum = %ld\n", lnum);

	printf("fnum = %f\n", fnum);
	printf("dnum = %lf\n", dnum);

	exit(0);

}
 

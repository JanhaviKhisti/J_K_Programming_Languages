
/**
 * @file: numltiplication.c
 * @brief: Demonstration of Arithmetic Operators implementation using C 
 * @author: Janhavi Khisti(janhavikhisti@gmail.com)
 * @date: 03 August 2023 (Thursday)
 */

// Header
#include <stdio.h>
#include <stdlib.h>

// Global Data Definition
char cnum1 = 7;
char cnum2 = 2;
char cnum3 = 0;

short snum1 = 123;
short snum2 = 150;
short snum3 = 0;

int inum1 = 212325;
int inum2 = 111222;
int inum3 = 0;

long lnum1 = 91817161;
long lnum2 = 2;
long lnum3 = 0;


float fnum1 = 1234.4455;
float fnum2 = 125.20;
float fnum3 = 0;

double dnum1 = 1559753.46;
double dnum2 = 48624.153;
double dnum3 = 0;

int main(int argc, char** argv, char** envp)
{
	// code
	cnum3 = cnum1 * cnum2;
	printf("cnum1 = %hhd\n", cnum1);
	printf("cnum2 = %hhd\n", cnum2);
	printf("cnum3 = %hhd\n", cnum3);

	snum3 = snum1 * snum2;
	printf("snum1 = %hd\n", snum1);
	printf("snum2 = %hd\n", snum2);
	printf("snum3 = %hd\n", snum3);

	inum3 = inum1 * inum2;
	printf("inum1 = %d\n", inum1);
	printf("inum2 = %d\n", inum2);
	printf("inum3 = %d\n", inum3);

	lnum3 = lnum1 * lnum2;
	printf("lnum1 = %ld\n", lnum1);
	printf("lnum2 = %ld\n", lnum2);
	printf("lnum3 = %ld\n", lnum3);


	fnum3 = fnum1 * fnum2;
	printf("fnum1 = %f\n", fnum1);
	printf("fnum2 = %f\n", fnum2);
	printf("fnum3 = %f\n", fnum3);

	dnum3 = dnum1 * dnum2;
	printf("dnum1 = %lf\n", dnum1);
	printf("dnum2 = %lf\n", dnum2);
	printf("dnum3 = %lf\n", dnum3);

	exit(0);

}


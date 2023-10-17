
/**
 * S.G.M.P
 * @file: code_01.c
 * @brief: Implementation of Multi Dimensional Array
 * @author: Janhavi Khisti(janhavikhisti@gmail.com)
 * @date: 15 August 2023 (Tuesday)
 */

 #include <stdio.h>
 #include <stdlib.h>

int iarr1[10];

int iarr2[10][20];

int iarr3[10][20][30];

int iarr4[20][30][40][50];

int main(int argc, char** argv, char** envp)
{
	// Code
	printf("\n\n");

	printf("1D Array :\n");
	// Access 1D Array
	// Writing Data to 1D Array
	for(int le = 0; le < 10; ++le)
	{
		iarr1[le] = (le+1) * 10;
	}

	// Reading data from 1D Array
	for(int le = 0; le < 10; ++le)
	{
		printf("iarr1[%d] = %d\n", le, iarr1[le]);
	}

	printf("\n\n");


	printf("2D Array:\n");
	int count = 1;
	// Access 2D Array
	for(int ole = 0; ole < 10; ++ole)
		for(int ile = 0; ile < 20; ++ile)
			iarr2[ole][ile] = count++;
	
	for(int ole = 0; ole < 10; ++ole)
		for(int ile = 0; ile < 20; ++ile)
			printf("iarr2[%d][%d] = %d\n", ole, ile, iarr2[ole][ile]);
	printf("\n\n");


	printf("3D Array:\n");
	count = 1;
	// Access 3D Array
	for(int index1 = 0; index1 < 10; ++index1)
		for(int index2 = 0; index2 < 20; ++index2)
			for(int index3 = 0; index3 < 30; ++index3)
				iarr3[index1][index2][index3] = count++;
	
	for(int index1 = 0; index1 < 10; ++index1)
		for(int index2 = 0; index2 < 20; ++index2)
			for(int index3 = 0; index3 < 30; ++index3)
				printf("iarr3[%d][%d][%d] = %d\n", index1, index2, index3, iarr3[index1][index2][index3]);
	printf("\n\n");


	printf("4D Array:\n");
	count = 1;
	// Access 3D Array
	for(int index1 = 0; index1 < 20; ++index1)
		for(int index2 = 0; index2 < 30; ++index2)
			for(int index3 = 0; index3 < 40; ++index3)
				for(int index4 = 0; index4 < 50; ++index4)
					iarr4[index1][index2][index3][index4] = count++;
	
	for(int index1 = 0; index1 < 20; ++index1)
		for(int index2 = 0; index2 < 30; ++index2)
			for(int index3 = 0; index3 < 40; ++index3)
				for(int index4 = 0; index4 < 50; ++index4)
					printf("iarr4[%d][%d][%d][%d] = %d\n", index1, index2, index3, index4, iarr4[index1][index2][index3][index4]);

	exit(0);

}


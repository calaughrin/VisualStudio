#include <stdio.h>
#include <conio.h>

float aMatrix[3][2];

void matrixFunc();

void main(void)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			aMatrix[i][j] = i + j;
			printf("%8.2f", aMatrix[i][j]);
		}
		printf("\n");
	}

	_getch();

	matrixFunc();

	printf("back in Main, the matrix values are now: \n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			aMatrix[i][j]*=2;
			printf("%8.2f", aMatrix[i][j]);
		}
		printf("\n");
	}

	_getch();
}

void matrixFunc()
{
	printf("In matrixFunc, the matrix values are now: \n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			aMatrix[i][j] *= 2;
			printf("%8.2f", aMatrix[i][j]);
		}
		printf("\n");
	}
	_getch();
}
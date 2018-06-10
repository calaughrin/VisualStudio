#include <stdio.h>
#include <conio.h>

void arraySum(double* ptr1, double* ptr2, double* ptr3);

void main(void)
{
	double array1[5] = { 0,1,2,3,4 };
	double array2[5] = { 0 };
	double sumArray[5] = { 0 };

	printf("The contents of the two arrays are: \n");
	printf("Array1      Array2");
	for (int i = 0; i < 5; i++)
	{
		array2[i] = 2 * i;
		printf("\n%8.2f%8.2f", array1[i], array2[i]);
	}

	_getch();

	arraySum(array1, array2, sumArray);
	_getch();

	printf("\n\nBack in Main - The contents of the summed array are: \n");
	printf("sumArray");
	for (int i = 0; i < 5; i++)
	{
		printf("\n%8.2f", sumArray[i]);
	}

	_getch();
}

void arraySum(double* ptr1, double* ptr2, double* ptr3)
{
	for (int i = 0; i < 5; i++)
	{
		*(ptr3 + i) = *(ptr1 + i) + *(ptr2 + i);
	}
}
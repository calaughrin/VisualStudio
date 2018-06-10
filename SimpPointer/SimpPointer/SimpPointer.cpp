#include <stdio.h>
#include <conio.h>

void main(void)
{
	int i;
	int* intPointer;
	intPointer = &i;
	i = 15;

	printf("\nThis is the value of i: %d\n", i);
	printf("\nThis is the value of *intPointer: %d\n", *intPointer);
	printf("\nThis is the memory location of i: %p\n", &i);
	printf("\nThis is the memory location of intPointer: %p\n", intPointer);
	_getch();
	printf("\nThis is the value of *i+1: %d\n", *(intPointer+1));
	printf("\nThis is the memory location of i+1: %p\n", (intPointer+1));
	printf("\nThis is the value of *i+1: %p\n", *(intPointer + 1));
	_getch();
}
#include <stdio.h>
#include <conio.h>

struct AddData
{
	double add1, add2, add3;
	double total;
};

double sum(AddData*);

void main(void)
{
	/* code */
	double total;
	AddData set[4];
	set[0].add1 = 1;
	set[0].add2 = 2;
	set[0].add3 = 3;
	set[0].total = sum(&set[0]);

	for (int i = 0; i < 4; i++)
	{
		if (i > 0)
		{
			set[i] = set[i - 1];
			set[i].add1 *= 2;
			set[i].add2 *= 2;
			set[i].add3 *= 2;
			set[i].total = sum(&set[i]);
		}
		printf("The values of set1%d are: \n", i);
		printf("%8.2f%8.2f%8.2f\n", set[i].add1, set[i].add2, set[i].add3);
		printf("The total of set1%d are: \n", i);
		printf("%8.2\n", set[i].total);
		_getch();

	}
	_getch();
}

double sum(AddData* aPointer)
{
	double result = 0;
	result = aPointer->add1 + aPointer->add2 + aPointer->add3;
	return(result);
}
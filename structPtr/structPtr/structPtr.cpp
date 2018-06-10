#include <stdio.h>
#include <conio.h>

struct AddData
{
	double add1, add2, add3;
};

double sum(AddData*);

void main(void)
{
	/* code */
	double total;
	struct AddData set1;
	AddData* ptrSet1;
	ptrSet1 = &set1;
	set1.add1 = 1;
	set1.add2 = 2;
	set1.add3 = 3;
	printf("The values of set1 are: \n");
	printf("%8.2f%8.2f%8.2f\n", set1.add1, set1.add2, set1.add3);
	_getch();
	total = sum(ptrSet1);

	_getch();

	printf("The total of the three numbers in set1 is: %8.2f\n", total);
	_getch();

	AddData set2;
	AddData* ptrSet2;
	ptrSet2 = &set2;
	set2 = set1;
	set2.add1 *= 2;
	set2.add2 *= 2;
	set2.add3 *= 2;
	printf("The values of set2 are: \n");
	printf("%8.2f%8.2f%8.2f\n", set2.add1, set2.add2, set2.add3);
	_getch();
	total = sum(ptrSet2);

	_getch();

	printf("The total of the three numbers in set2 is: %8.2f\n", total);
	_getch();


}

double sum(AddData* aPointer)
{
	double result = 0;
	result = aPointer->add1 + aPointer->add2 + aPointer->add3;
	return(result);
}
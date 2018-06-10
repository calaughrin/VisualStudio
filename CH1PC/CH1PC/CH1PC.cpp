/*Craig Laughrin
Chapter 1 Homework Assignment
Calculate movement from rest with constant acceleration*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;

void startMoving(void);

void main(void)
{
	char runAgain = 'y';
	while (runAgain == 'y' || runAgain == 'Y')
	{
		startMoving();
		printf("\n\nWould you like to calculate other positions? (y or n): ");
		runAgain = _getche();
		_getch();
	}
}

void startMoving(void)
{
	float currentPos, initPosition, accel, time;
	printf("\n\nEnter the initial position: ");
	scanf_s("%f", &initPosition);
	printf("\n\nEnter the rate of acceleration: ");
	scanf_s("%f", &accel);
	printf("\n\nEnter the amount of time: ");
	scanf_s("%f", &time);
	currentPos = initPosition + accel * pow(time,2);
	printf("\n\nThe initial position is: %8.2f", initPosition);
	printf("\n\nThe rate of acceleration is: %8.2f", accel);
	printf("\n\nThe amount of time is: %8.2f", time);
	printf("\n\nThe calculated velocity is: %8.2f", currentPos);
}
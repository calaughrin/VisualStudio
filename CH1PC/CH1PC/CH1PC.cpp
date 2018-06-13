/*Craig Laughrin
Chapter 1 Homework Assignment
Calculate movement from rest with constant acceleration*/

#include <stdio.h>
#include <conio.h>
#include <math.h> // Needed for additional math functions.

using namespace std;

void startMoving(void); // Function prototype.

void main(void)
{
	char runAgain = 'y';
	while (runAgain == 'y' || runAgain == 'Y') // Simple while loop to continue till user quits.
	{
		startMoving(); // Function call.
		printf("\n\nWould you like to calculate other positions? (y or n): ");
		runAgain = _getche();
		_getch();
	}
}

// Function to find the current position based on user input.
void startMoving(void)
{
	float currentPos, initPosition, accel, time;
	printf("\n\nEnter the initial position: "); // Get user inpute.
	scanf_s("%f", &initPosition);
	printf("\n\nEnter the rate of acceleration: "); // Get user inpute.
	scanf_s("%f", &accel);
	printf("\n\nEnter the amount of time: "); // Get user inpute.
	scanf_s("%f", &time);
	currentPos = initPosition + accel * pow(time,2); // Equation to determine current position based on the users input.
	printf("\n\nThe initial position is: %8.2f", initPosition); // Restate the initial position.
	printf("\n\nThe rate of acceleration is: %8.2f", accel); // Restate the acceleration.
	printf("\n\nThe amount of time is: %8.2f", time); // Restate the amount of time.
	printf("\n\nThe calculated velocity is: %8.2f", currentPos); // Display the current position based on the values provided by the user.
}
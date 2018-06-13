#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

struct threeDNum
{
	int x, y, z, total;
};

void main(void)
{
	int numbers[10][10][10];
	threeDNum numberStruct[1000];
	int xCoord, yCoord, zCoord;
	int seed = time(0);
	srand(seed);
	int randNum = rand() % 100 + 1;

	printf("Your random number is: %d", randNum);

	for (int x = 0; x < 10; x++)
	{
		for (int y = 0; y < 10; y++)
		{
			for (int z = 0; z < 10; z++)
			{
				numbers[x][y][z] = x * 1000 + y * 100 + z * 10;
			}
		}
	}

	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				numberStruct[count].x = i * 1000;
				numberStruct[count].y = j * 100;
				numberStruct[count].z = k * 10;
				numberStruct[count].total = i * 1000 + j * 100 + k * 10;
				count++;
			}
		}
	}

	printf("\n\nEnter the x coord: ");
	scanf_s("%d", &xCoord);
	printf("\n\nEnter the y coord: ");
	scanf_s("%d", &yCoord);
	printf("\n\nEnter the x coord: ");
	scanf_s("%d", &zCoord);

	printf("\n\nThe value at coords (%d, %d, %d) is: %d", xCoord, yCoord, zCoord, numbers[xCoord][yCoord][zCoord]);

	count = 0;
	while ((numberStruct[count].x != xCoord) 
		|| (numberStruct[count].y != yCoord) 
		|| (numberStruct[count].z != zCoord))
	{
		count++;
	}

	printf("\n\nThe element for coords (%d, %d, %d) is: %d and the value is: %d", xCoord, yCoord, zCoord, count, numberStruct[count].total);

	_getch();
}
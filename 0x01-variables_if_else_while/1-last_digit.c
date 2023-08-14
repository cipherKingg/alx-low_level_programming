#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: checks on the last digit of the assigned var
 * Return: Always 0 (success)
 */

int main(void)
{
	int x, y;

	srand(time(0));
	x = rand() - RAND_MAX / 2;
	y = x % 10;
	if (y > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", x, y);
	}
	else if (y < 6 && y != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", x, y);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", x, y);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random
 * valid passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pas[100];
	int x, sum, z;

	sum = 0;	

	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
		pas[x] = rand() % 78;
		sum += (pas[x] + '0');
		putchar(pas[x] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			z = 2772 - sum - '0';
			sum += z;
			putchar(z + '0');
			break;
		}
	}

	return (0);
}

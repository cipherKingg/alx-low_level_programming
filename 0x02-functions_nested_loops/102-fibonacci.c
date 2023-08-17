#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 * frim 1 and 2,separated by a comma thein space.
 *
 * Return: 0.
 */
int main(void)
{
	int count;
	unsigned long fibo1 = 0, fibo2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fibo1 + fibo2;
		printf("%lu", sum);

		fibo1 = fibo2;
		fibo2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

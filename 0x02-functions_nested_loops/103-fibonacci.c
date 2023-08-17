#include <stdio.h>

/**
 * main - finds and prints the sum of
 * the even valued terms followed by a new line
 * Return: 0
 *
 */
int main(void)
{
	int x;
	unsigned long int y, z, nxt, sum;

	y = 1;
	z = 2;
	sum = 0;

	for (x = 1; x <= 33; ++x)
	{
		if (y < 4000000 && (y % 2) == 0)
		{
			sum = sum + y;
		}
		nxt = y + z;
		y = z;
		z = nxt;
	}

	printf("%lu\n", sum);

	return (0);
}

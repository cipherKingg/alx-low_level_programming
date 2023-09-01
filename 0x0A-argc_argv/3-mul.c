#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string into an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int x, y, z, len, i, dig;

	x = 0;
	y = 0;
	z = 0;
	len = 0;
	i = 0;
	dig = 0;

	while (s[len] != '\0')
		len++;

	while (x < len && i == 0)
	{
		if (s[x] == '-')
			++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
			dig = s[x] - '0';
			if (y % 2)
				dig = -dig;
			z = z * 10 + dig;
			i = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			i = 0;
		}
		x++;
	}

	if (i == 0)
		return (0);

	return (z);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int res, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	res = n1 * n2;

	printf("%d\n", res);

	return (0);
}

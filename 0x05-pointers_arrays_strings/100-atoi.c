#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int x, y, z, ln, i, digit;

	x = 0;
	y = 0;
	z = 0;
	ln = 0;
	i = 0;
	digit = 0;

	while (s[ln] != '\0')
		ln++;

	while (x < ln && i == 0)
	{
		if (s[x] == '-')
			++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (y % 2)
				digit = -digit;
			z = z * 10 + digit;
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

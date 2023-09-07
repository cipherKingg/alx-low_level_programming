#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains
 * a non-digit character
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int y = 0;

	while (s[y] != '\0')
	{
		y++;
	}
	return (y);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int l1, l2, l, z, carry, dig1, dig2, *res, i = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	l = l1 + l2 + 1;
	res = malloc(sizeof(int) * l);
	if (!res)
		return (1);
	for (z = 0; z <= l1 + l2; z++)
		res[z] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		dig1 = s1[l1] - '0';
		carry = 0;
		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			dig2 = s2[l2] - '0';
			carry += res[l1 + l2 + 1] + (dig1 * dig2);
			res[l1 + l2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			res[l1 + l2 + 1] += carry;
	}
	for (z = 0; z < l - 1; z++)
	{
		if (res[z])
			i = 1;
		if (i)
			_putchar(res[z] + '0');
	}
	if (!i)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}

#include "main.h"
/**
 * puts2 - function prints only one character
 * out of two starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int lngi = 0;
	int x = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		lngi++;
	}
	x = lngi - 1;
	for (i = 0 ; i <= x ; o++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}

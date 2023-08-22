#include "main.h"
/**
 * print_rev - print strg in revers
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int lngi = 0;
	int x;

	while (*s != '\0')
	{
		lngi++;
		s++;
	}
	s--;
	for (x = lngi; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

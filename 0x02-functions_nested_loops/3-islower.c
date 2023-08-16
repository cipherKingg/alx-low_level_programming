#include "main.h"

/**
 * _islower - check if character is lowercase
 * @c: is the character to be checked
 * Return: 1 for lowercase character, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

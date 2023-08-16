#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to be checked
 * Return: 1 if char is a letter, 0 otherwise
 */
int _isalpha(int i)
{
	if ((i >= 65 && i <= 97) || (i >= 97 && i <= 122))
	{
		return (1);
	}
	return (0);
}

#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * @i: the integer to check
 * Return: the absolute value of integer or zero
 */
int _abs(int i)
{
	if (i < 0)
	{
		int absolut_val;

		absolut_val = i * -1;
		return (absolut_val);
	}
	return (i);
}

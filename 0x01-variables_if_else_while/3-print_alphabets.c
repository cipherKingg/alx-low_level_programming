#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print lowercase and uppercase alphabets'
 * Return: always 0
 */
int main(void)
{
	int n1 = 97;
	int n2 = 65;

	while (n1 <= 122)
	{
		putchar(n1);
	}
	while (n2 <= 90)
	{
		putchar(n2);
	}
	putchar('\n');
	return (0);
}

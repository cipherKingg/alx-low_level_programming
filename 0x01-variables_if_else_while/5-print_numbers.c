#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print numbers in base 10'
 * Return: always 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}

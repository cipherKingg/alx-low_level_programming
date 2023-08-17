#include <stdio.h>

/**
 * main - fibonacci
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int i;
	unsigned long int bf = 1;
	unsigned long int af = 2;
	unsigned long int l = 1000000000;
	unsigned long int bf1;
	unsigned long int bf2;
	unsigned long int af1;
	unsigned long int af2;

	printf("%lu", bf);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", af);
		af += bf;
		bf = af - bf;
	}

	bf1 = (bf / l);
	bf2 = (bf % l);
	af1 = (af / l);
	af2 = (af % l);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", af1 + (af2 / l));
		printf("%lu", af2 % l);
		af1 = af1 + bf1;
		bf1 = af1 - bf1;
		af2 = af2 + bf2;
		bf2 = af2 - bf2;
	}
	printf("\n");
	return (0);
}

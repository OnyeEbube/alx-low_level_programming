#include <stdio.h>

/**
 * main - Prints prime factors of a number
 * Return: returns 0 for success
 */

int main(void)
{
	long int a = 612852475143;
	long int b;

	for (b = 2; b < a; b++)
	{
		if (a % b == 0)
		{
			a /= b;
			b--;
		}
	}
	printf("%ld\n", b);
	return (0);
}

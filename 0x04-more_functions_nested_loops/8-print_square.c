#include "main.h"

/**
 * print_square - Prints a square
 * @size: size of the square
 */

void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(35);
		}
		if (i < (size - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
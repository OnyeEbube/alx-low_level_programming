#include "main.h"

/**
 * print_diagonal - Prints diagonal lines
 * @n: the number of times the line is printed
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		_putchar(92);
		_putchar('\n');
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
}

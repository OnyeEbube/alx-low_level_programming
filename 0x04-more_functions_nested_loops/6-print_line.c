#include "main.h"

/**
 * print_line - prints a line diagonally
 * @n: the number of times for the line to be printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < = n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}

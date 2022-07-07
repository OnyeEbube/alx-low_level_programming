#include "main.h"

/**
 * print_triangle - Prints triangles followed by a new line
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - i); j++)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar(35);
		}
		if (i < size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}

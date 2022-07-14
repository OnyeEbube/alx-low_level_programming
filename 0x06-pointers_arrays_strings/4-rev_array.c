#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: the number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i = n - 1;

	for ( ; i >= 0; i--)
	{
		_putchar(a[i]);
		if (i != 0)
		{
			_putchar(', ');
		}
	}
	_putchar('\n');
}

#include "main.h"
/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			_putchar((a * b) + '0');
			if (b == 9)
				break;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

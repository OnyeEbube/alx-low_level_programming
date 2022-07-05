#include "main.h"
/**
 * print_to_98 - Prints any number down to 98
 * @n: The integer to be checked
 *
 * Return: 0 for success
 */
int print_to_98(int n)
{
	if (n > 98)
	{
		int l;

		for (l = n; l >= 98; l--)
		{
			_putchar((l / 10) + 48);
			_putchar((l % 10) + 48);
			if (l == 98)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n == 98)
	{
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
	}
	else
	{
		int m;

		for (m = n; m <= 98; m++)
		{
			_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
			if (m == 98)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	return (0);
}

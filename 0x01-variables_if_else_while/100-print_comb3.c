#include <stdio.h>
/**
 * main -Prints combination of two digits
 *
 * Return: always returns 0 for success
 */
int main(void)
{
	int a;
	int b;

	for (a = 48; a < 58 ; a++)
	{

		for (b = 48; b < 58; b++)
		{

			if (a != b && a < b)
			{
				putchar(a);
				putchar(b);
				if (a == 56 && b == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

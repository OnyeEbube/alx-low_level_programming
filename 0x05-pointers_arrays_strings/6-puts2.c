#include <stdio.h>
#include "main.h"

/**
 * puts2 - Prints every character of a string
 * @str: The string to be passed
 * Return: no return value
 */

void puts2(char *str)
{
	int i;
	int a;

	while (i >= 0)
	{
		if (*(str + i) == '\0')
		{
			break;
		}
		i++;
	}
	for (a = 0; a < (i - 1); a + 2)
	{
		_putchar(str[a]);
		_putchar('\n');
	}
}

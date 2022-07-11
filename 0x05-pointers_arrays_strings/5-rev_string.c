#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 * Return: no return
 */

void rev_string(char *s)
{
	int i = 0;
	char *rev;

	while (i >= 0)
	{
		if (s[i] == '\0')
		{
			break;
		}
		i++;
	}
	for (i--; i >= 0; i--)
	{
		rev = s[i];
	}
	s = rev;
}

#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 * Return: no return
 */

void rev_string(char *s)
{
	int i;
	char rev;

	for (i--; i >= 0; i--)
	{
		rev = s[i];
	}
	s = rev;
}

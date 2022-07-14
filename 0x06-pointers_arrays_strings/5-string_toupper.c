#include "main.h"

/**
 * string_toupper - changes a string to uppercase
 * @a: The string to be changed
 *
 * Return: the uppercased string
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] = a[i] - 32;
		}
		i++;
	}
	return (a);
}

#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: The first string
 * @s2: The other string
 *
 * Return: Always 1.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (j < i)
		return (-1);
	else if (j == i)
		return (0);
	else
		return (1);
}

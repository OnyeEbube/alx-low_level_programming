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
	int i = 0, j = 0, ret;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (i < j)
	{
		ret = -1;
	}
	else if (i == j)
	{
		ret = 0;
	}
	else
	{
		ret = 1;
	}
	return (ret);
}

#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: the byte where the concat starts from
 *
 * Return: returned pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated
 * if the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	*char c;
	int m, l, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (i >= 0)
	{
		if (s1[i] == '\0')
			break;
		i++;
	}
	m = i;
	while (j >= 0)
	{
		if (s2[j] == '\0')
			break;
		j++;
	}
	l = j;
	if (n > l)
		n = l;
	c = malloc(m + n);

	if (c == NULL)
		free(c);
		return (NULL);
	for (k = 0; k < (m + n); k++)
	{
		if (k < m)
			c[k] = s1[k];
		else
			c[k] = s2[k - m];
	}
	c[k] = '\0';

	return (c);
}

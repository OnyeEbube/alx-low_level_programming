#include "main.h"

/**
 * _strstr -  finds the first occurrence of the substring needle
 * in the string haystack. The terminating null bytes (\0) are not compared
 * @haystack: The string
 * @needle: The substring
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int n = 0, b;
	int m = 0, a;

	while (n >= 0)
	{
		if (haystack[n] == '\0')
			break;
		n++;
	}
	while (m >= 0)
	{
		if (needle[m] == '\0')
			break;
		m++;
	}
	for (b = 0; b < m; b++)
	{
		for (a = 0; a < n; a++)
		{
			if (needle[b] == haystack[a])
			{
				return (needle + b);
			}
		}
	}
	return ('\0');
}

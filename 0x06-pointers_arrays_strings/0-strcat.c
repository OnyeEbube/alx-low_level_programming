#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: First string
 * @src: The second string
 * Return: a pointer to the returning string dest
 */

char *_strcat(char *dest, char *src)
{
	int j = 0;
	int i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}

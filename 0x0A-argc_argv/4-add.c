#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 0 - Success
 */

int main(argc, *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
			add += atoi(argv[i]);
	}
		printf("%d\n", add);
		return (0);
}

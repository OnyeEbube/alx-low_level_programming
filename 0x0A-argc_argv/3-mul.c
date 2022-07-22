#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 0 - Success
 */

int main(argc, *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

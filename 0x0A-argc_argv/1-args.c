#include <stdio.h>

/**
 * main -  prints the number of arguments passed into it.
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 0 - Success
 */
int main(argc, *argv[]__attribute__((unused)))
{
	printf("%d", argc - 1);
	return (0);
}

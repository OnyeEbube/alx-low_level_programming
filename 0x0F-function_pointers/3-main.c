#include "3-calc.h"

/**
 * main - the main code
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*get_f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	get_f = get_op_func(argv[2]);
	if (get_f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", get_f(a, b));
	return (0);
}

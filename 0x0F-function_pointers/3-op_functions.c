#include "3-calc.h"

/**
 * op_add - sums two numbers
 * @a: the first int
 * @b: the second int
 *
 * Return: returns the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference between a and b
 * @a: the first integer
 * @b: the second integer
 *
 * Return: returns the difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the product of the two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of divsion of a by b
 * @a: the first num
 * @b: the the divisor
 *
 * Return: the result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod = return the modulus od a and b
 * @a: the number
 * @b: the divisor
 *
 * Return: the remainder of the division
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

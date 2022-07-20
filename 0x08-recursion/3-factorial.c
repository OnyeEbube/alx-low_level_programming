#include "main.h"

/**
 * factorial -returns the factorial of a given number
 * @n: The given number
 *
 * Return: the factorial of the given number
 */

int factorial(int n)
{
	if (n == 1)
		return (1);
	else
	{
		return (n * factorial(n - 1));
	}
}

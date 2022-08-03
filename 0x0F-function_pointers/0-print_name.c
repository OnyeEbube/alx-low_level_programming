#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: The name
 * @f: the function pointer
 *
 * Return: no return
 */

void print_name(*name, void(*f)(char *))
{
	if (f && name)
		f(name);
}

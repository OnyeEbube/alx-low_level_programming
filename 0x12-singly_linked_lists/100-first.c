#include <stdio.h>

/**
 * bmain - function executed before the main
 * Return: no return
 */

void bmain()__attribute__((constructor))
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative - This prints if a number is  positive or negative
 *@i: The number to be checked
 *
 * Return:no return
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}

#include "main.h"

/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */

int main(void)

{
	int i;

	i = 0;
	positive_or_negative(i);

	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 for success
 */
int main(void)
{
	int alpha = 'a';

	for (; alpha <= 122; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}

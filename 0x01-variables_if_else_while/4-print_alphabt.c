#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: value is always 0 for success
 */
int main(void)
{
	char alpha[24] = "abcdfghijklmnoprstuvwxyz";
	int a;

	for (a = 0; a < 24; a++)
	{
		putchar(alpha[a]);
	}
	putchar('\n');
	return (0);
}

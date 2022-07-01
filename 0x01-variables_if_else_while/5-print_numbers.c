#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	char num[10] = "9876543210";
	int a;

	for (a = 9; a >= 0; a--)
	{
		putchar(num[a]);
	}
	putchar('\n');
	return (0);
}

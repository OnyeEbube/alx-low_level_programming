#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: return 0 for success
 */
int main(void)
{
	char hexa[16] = "fedcba9876543210";
	int i;

	for (i = 15; i >= 0; i--)
{
	putchar(hexa[i]);
}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 for success
 */
int main(void)
{
	int alpha[26] = 'abcdefghijklmnopqrstuvwxyz';
	int ALPHA = toupper(alpha);

	putchar(alpha + ALPHA);
	return (0);
}

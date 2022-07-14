#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: the number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = i + 1;
	int temp;

	while (i < n - 1)
	{
		while (j > 0)
		{
			temp = a[j];
			a[j] = a[j - 1];
			a[j - 1] = temp;
			j--;
		}
		i++;
	}
}

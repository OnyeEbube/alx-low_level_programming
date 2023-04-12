#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: The array searched
 * @size: Size of the array
 * @value: The value we're searching for in the array
 * Return: the index where value is located otherwise,
 * return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t y;

	if (!array)
	{
		return (-1);
	}

	for (y = 0; y < size; y++)
	{
		printf("Value checked array[%li] = [%i]\n", y, array[y]);
		if (array[y] == value)
		{
			return (y);
		}
	}
	return (-1);
}

#include "hash_tables.h"

/**
 * key_index - gives you the key index of a key
 * @key: the key of the data value
 * @size: the size of the table
 *
 * Return: the index of the key/value pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (key == NULL || size == 0)
		return (0);
	index = (hash_djb2(key) % size);
	return (index);
}

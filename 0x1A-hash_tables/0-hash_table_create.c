#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size:  The size of the hash table
 *
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}

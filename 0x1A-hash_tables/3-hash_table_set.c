#include "hash_tables.h"

/**
 * create_item - creates memory for key and value
 * @key: the key
 * @value: the value
 *
 * Return: a pointer to the item
 */

hash_node_t *add_n_hash(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *item;

	item = *head;
	while (item != NULL)
	{
		if (strcmp(key, item->key) == 0)
		{
			free(item->value);
			item->value = strdup(value);
			return (*head);
		}
		item = item->next;
	}

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (NULL);
	item->key = strdup(key);
	item->value = strdup(value);
	item->next = *head;
	*head = item;

	return (*head);
}


/**
 * hash_table_set - adds an element to the hash node
 * @ht: the hash table
 * @key: the key
 * @value: thr value associated with the key
 *
 * Return: 1 for success and 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k_index;

	if (ht == NULL)
		return (0);
	if (key == NULL || *key == '\0')
		return (0);
	k_index = key_index((unsigned char *)key, ht->size);
	if (add_n_hash(&(ht->array[k_index]), key, value) == NULL)
		return (0);
	return (1);
}

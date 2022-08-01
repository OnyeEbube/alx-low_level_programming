#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: the new dog's name
 * @age: its age
 * @owner: its owner
 *
 * Return: struct dog and null if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i, namlen, ownlen;

	ptr = malloc(sizeof(*ptr));

	if (ptr == NULL || !(name) || !(owner))
	{
		free(ptr);
		return (NULL);
	}
	for (namlen = 0; name[namlen]; namlen++)
		;
	for (ownlen = 0; owner[ownlen]; ownlen++)
		;
	ptr->name = malloc(namlen + 1);
	ptr->owner = malloc(ownlen + 1);

	if (!(ptr->name) || !(ptr->owner))
	{
		free(ptr->name);
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < namlen; i++)
		ptr->name[i] = name[i];
	ptr->name[i] = '\0';
	ptr->age = age;
	for (i = 0; i < ownlen; i++)
		ptr->owner[i] = owner[i];
	ptr->owner[i] = '\0';

	return (ptr);
}

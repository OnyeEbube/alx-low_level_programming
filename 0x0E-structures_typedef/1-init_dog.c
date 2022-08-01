#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: struct dog
 * @name: the name of the dog
 * @age: the dog's age
 * @owner: the owner's name
 *
 * Return: no return
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{ 
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

#ifndef _DOG_H
#define _DOG_H

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;

/**
 * struct dog - a structure that stores some information on a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: a struct that stores the name, age and even
 * the name of the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif

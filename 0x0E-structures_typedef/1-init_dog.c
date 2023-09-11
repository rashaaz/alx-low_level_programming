#include "dog.h"

/**
 * init_dog - new dogs
 * @d: Pointer
 * @name: The dog name
 * @age: The dog age
 * @owner: the dog owner
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

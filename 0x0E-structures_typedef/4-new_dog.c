#include <stdlib.h>
#include "dog.h"

/**
 * _sl - cont linght
 * @ss: pointer
 *
 * Return: linght
 */


int _sl(const char *ss)
{
	int n;

	n = 0;
	while (*ss++)
	{
		n++;
	}
	return (n);
}

/**
 * cc - copy
 * @dd: pointer
 * @rr: pointer
 *
 * Return: dd
 */

char *cc(char *dd, char *rr)
{
	int ii;

	for (ii = 0; rr[ii]; ii++)
	{
		dd[ii] = rr[ii];
	}
	dd[ii] = '\0';
	return (dd);
}

/**
 * new_dog - Creates a new do
 * @name: The dog name
 * @age: The dog age
 * @owner: the dog owne
 *
 * Return: Pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_sl(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_sl(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = cc(dog->name, name);
	dog->age = age;
	dog->owner = cc(dog->owner, owner);

	return (dog);
}

#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initializing my struct
 * @d: the  pointer to the struct
 * @name: pointer to the name
 * @age: age to the struct
 * @owner: pointer to the owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

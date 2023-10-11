#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - freeing the function allocated memory
 * @d: this is the pointer to the struct
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			free(d->name);
		}
		free(d);
	}
}

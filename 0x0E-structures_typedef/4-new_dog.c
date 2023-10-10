#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - allocating a new memory for the new struct
 * @name: pointer to name of the dog
 * @age: pointer to age of the dog
 * @owner: pointer to owner of the dog
 * Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	new_dog->name = strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	return (new_dog);
}

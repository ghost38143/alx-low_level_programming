#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
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
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}

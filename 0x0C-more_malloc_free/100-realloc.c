#include "main.h"
/**
 * _realloc - function to reallocate memory
 * @ptr: the pointer to the prev memory
 * @old_size: the prev memory
 * @new_size: the new memory
 * Return: nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	unsigned int i;

	if (new_size == old_size)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		return (new);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	new = malloc(new_size);

	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size && i < new_size; i++)
	{
		new[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (new);
}



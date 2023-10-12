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
		return (ptr);
	}
	if (ptr == NULL)
	{
		if (new == 0)
		{
			free(ptr);
			return (NULL);
		}
	new = malloc(new_size);/*allocate the return of the new memory*/
	if (new == NULL)
	{
		return (NULL);/*check if the allocation was succesful*/
	}
	return (new);
	}
	if (new_size == 0)/*handle when ptr is not null*/
		{
			free(ptr);
			return (NULL);
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



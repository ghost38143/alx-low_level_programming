#include "main.h"
/**
 * _calloc - allocating the size of the array
 * @nemb: the array
 * @size: the size of the array
 * Return: value
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	ptr = calloc(nmemb, size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	free(ptr);
	return (ptr);
}

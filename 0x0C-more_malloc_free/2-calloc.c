#include "main.h"
/**
 * _calloc - allocating the size of the array
 * @nmemb: the array
 * @size: the size of the array
 * Return: value
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int l;
	unsigned int i = 0;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = 0;
	}
	return (p);

}

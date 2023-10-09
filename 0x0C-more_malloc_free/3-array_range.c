#include "main.h"
/**
 * array_range - printing an array
 * @min: the minimum value
 * @max: the maximum value
 * Return: value
 */
int *array_range(int min, int max)
{
	int *p;
	int size = max - min + 1;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc(sizeof(int) * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = min + i;
	}
	return (p);
}

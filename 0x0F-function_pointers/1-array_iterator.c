#include "function_pointers.h"
/**
 * array_iterator - a function iterating in an array
 * @array: pointer to an array
 * @size: the size of an aray
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

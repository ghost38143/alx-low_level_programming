#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: pointer to the array
 * @size: the size of the array
 * @cmp: pointer to the function that comapres value
 * Return: the vaue
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}

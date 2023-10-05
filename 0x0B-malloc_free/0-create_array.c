#include "main.h"
/**
 * create_array - this function creates an array of character
 * @size: the zize of the array
 * @c: the charcter
 * Return: value
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(*s) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}

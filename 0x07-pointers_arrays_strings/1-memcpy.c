#include "main.h"
/**
 * *_memcpy - coping string from source to dest with a given size
 * @src: the source string to be copied
 * @dest: the destination of the source string
 * @n: the amount of size
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}


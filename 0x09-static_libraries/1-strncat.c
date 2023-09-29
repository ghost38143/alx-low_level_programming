#include "main.h"
/**
 * _strncat - linking strings
 * @dest: the string to be copied to
 * @src: the string to append
 * @n: maximum number of charcters to copy from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}

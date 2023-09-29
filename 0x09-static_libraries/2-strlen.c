#include "main.h"
/**
 * _strlen - calculating the length of astring
 * @s: string
 * Return: always 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

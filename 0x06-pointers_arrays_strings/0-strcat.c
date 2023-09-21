#include "main.h"
#include <string.h>
/**
 * _strcat - linking togerher two strings
 * @dest: the string to be linked with
 * @src: from the string to be linked with
 * Return: return dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int dlength = 0;
	int slength = 0;

	for (i = 0; dest[i] != '\0'; i++)
		dlength++;
	for (i = 0; src[i] != '\0'; i++)
		slength++;
	for (i = 0; i <= slength; i++)
		dest[dlength + i] = src[i];
	return (dest);

}


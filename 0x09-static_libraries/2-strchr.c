#include "main.h"
/**
 * *_strchr - locating a charcter in a string and returning null if not present
 * @s: the string to checked
 * @c: the charcter to be located
 * Return: c if a success and null if fail
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == c)
		{
			return (&(s[i]));
		}
	}
	return ('\0');
}



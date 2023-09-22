#include "main.h"
/**
 * string_toupper - converting to upper case
 * @str: the string to be converted
 * Return: character
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}

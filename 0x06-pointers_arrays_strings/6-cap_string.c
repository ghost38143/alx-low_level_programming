#include "main.h"
/**
 * cap_string - cpitalizing very wordd
 * @str: the string to be capitalized
 * Return: string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if  (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n'
					|| str[i - 1] == ',' || str[i - 1] == ';'
					|| str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?'
					|| str[i - 1] == '"' || str[i - 1] == '('
					|| str[i - 1] == ')' || str[i - 1] == '{' || str[i - 1] == '}')
			{
				str[i] -= 32;
			}
		}
	}
	return (str);
}

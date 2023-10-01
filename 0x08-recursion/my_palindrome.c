#include "main.h"
/**
 * is_palindrome - cheking if a string is palindrome
 * @s: the string to be checked
 * Return: value
 */
int is_palindrome(char *s)
{
	int i = 0, j;
	int count = 0;

	while (s[i] != '\0')
	{
		count++;
	}

	for (i = 0, j = count - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{

			return (0);
		}
	}
	return (1);
}

#include "main.h"
/**
 * _isupper - function that checks for uppercase
 * @c: the letter to be determined
 * Return: always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


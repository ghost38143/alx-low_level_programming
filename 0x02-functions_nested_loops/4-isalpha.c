#include "main.h"
/**
 * _isalpha - checking alphabet if lower or uppercase
 * @c: the character to be searched
 * Return: 1 to show lowercase or upper 0 for otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}

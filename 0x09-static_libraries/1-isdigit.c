#include "main.h"
/**
 * _isdigit - checking if c is a digit
 * @c: to be determined
 * Return: always 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}



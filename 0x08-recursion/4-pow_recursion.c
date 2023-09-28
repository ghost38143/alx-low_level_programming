#include "main.h"
/**
 * _pow_recursion - returning the value of x raised to the y
 * @x: the base value
 * @y: the power
 * Return: value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

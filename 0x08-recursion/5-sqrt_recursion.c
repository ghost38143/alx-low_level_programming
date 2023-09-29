#include "main.h"
/**
 * _sqrt_recursion - returning the sqrt of a natural number
 * @n: the number to be found its sqrt
 * Return: value
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 1));
}
/**
 * actual_sqrt_recursion - reurse to find the natural
 * @n: number to calculate the square root of
 * @num: iterator
 * Return: value
 */
int actual_sqrt_recursion(int n, int num)
{
	if (num * num == n)
	{
		return (num);
	}
	if (num > n / num)
	{
		return (-1);
	}
	else
	{
		return (actual_sqrt_recursion(n, num + 1));
	}
}

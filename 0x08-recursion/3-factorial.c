#include "main.h"
/**
 * factorial - printing the factorials of number
 * @n: the number to be printed
 * Return: the value
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);

	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

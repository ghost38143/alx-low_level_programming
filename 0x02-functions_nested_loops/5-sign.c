#include "main.h"
/**
 * print_sign - this function print the sign of a number
 * @n: the number to be determined
 * Return: 1 is greter than zero 0 is zero -1 is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar (43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar (48);
		return (0);
	}
	else
	{
		_putchar (45);
		return (-1);
	}
}

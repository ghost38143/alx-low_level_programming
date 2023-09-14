#include "main.h"
/**
 * print_last_digit - outputing the last digit using a function
 * @n: the last degit determined
 * Return: value of last digit of number
 */
int print_last_digit(int n)
{
	int lastd;

	lastd = n % 10;

	if (lastd < 0)
	{
		lastd = lastd * -1;
	}
	_putchar (lastd + '0');
	return (lastd);
}

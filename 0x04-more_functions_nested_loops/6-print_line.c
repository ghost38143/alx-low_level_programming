#include "main.h"
/**
 * print_line - print a straight line
 * @n: number to be inserted
 * Return: always 0
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar ('_');
			n--;
		}
		_putchar ('\n');
	}
	else
	{
		_putchar ('\n');
	}
}

#include "main.h"
/**
 * print_most_numbers - printing numbers from zero to nine
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 && i == 4)
		{
			break;
		}
		else
		{
			_putchar ('0' + i);
		}
	}
	_putchar ('\n');
}

#include "main.h"
/**
 * _puts - a function that prints a screen
 * @str: string to print
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar (*str++);
	}
	_putchar ('\n');
}

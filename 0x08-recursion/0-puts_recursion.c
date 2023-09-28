#include "main.h"
/**
 * _puts_recursion - printing a string
 * @s: the string to be printed
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}
	else
	{
		_putchar (s[i]);
		_puts_recursion(s + 1);
	}
}

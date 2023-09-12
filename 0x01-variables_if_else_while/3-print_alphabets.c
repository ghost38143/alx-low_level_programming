#include <stdio.h>
/**
 * main - pinting the alphabet using putchar
 * Return: always  (success)
 */
int main(void)
{
       	char c = 'a';

       	while (c <= 'z')
	{
		putchar (c);
		c++;
	}

	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar ('\n');

	return (0);
}

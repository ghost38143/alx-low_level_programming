#include <stdio.h>
/**
 * main - pinting the alphabet using putchar
 * Return: always  (success)
 */

int main()
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return(0);
}

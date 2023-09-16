#include <stdio.h>
/**
 * main - printing two digit number
 * Return: always 0 (success)
 */
int main(void)
{
	int x, y;

	for (x = 0; x <= 8; x++)
	{
		for (y = 1; y <= 9; y++)
		{
			putchar (x + '0');
			putchar (y + '0');
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');

	return (0);
}

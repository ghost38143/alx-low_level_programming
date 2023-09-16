#include <stdio.h>
/**
 * main - printing combo numbers separated by comma
 * Return: always 0 (success)
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 100; x++)
	{
		for (y = x + 1; y < 100; y++)
		{
			putchar ('0' + (x / 10));
			putchar ('0' + (x % 10));
			putchar (' ');
			putchar ('0' + (y / 10));
			putchar ('0' + (y % 10));
			if (x != 98 || y != 99)
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');

	return (0);
}



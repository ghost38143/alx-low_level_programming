#include <stdio.h>
/**
 * main - printing numbers with  comma 
 * Return: always (success)
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		if (a > 0)
		{
			putchar (',');
			putchar (' ');
			putchar (a + '0');
			a++;
		}
	}

	putchar('\n');

	return (0);
}


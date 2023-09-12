#include <stdio.h>
/**
 * main - printing hexa digits
 * Return: always (success)
 */
int main(void)
{
	int a = 0;

	while (a <= 15)
	{
		if (a >= 0 && a <= 9)
		{
			putchar (a + '0');
		}
		else
		{
			putchar (a - 10 + 'a');
		}
		a++;
	}

	putchar ('\n');
	return (0);
}


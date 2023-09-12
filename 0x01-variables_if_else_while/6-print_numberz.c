#include <stdio.h>
/**
 * main - counting numbers from zero to nine using putchar
 * Return: always (success)
 */
int main(void)

{
	int a = 0;

	while (a <= 9)
	{
		putchar(a + '0');
		putchar('\n');
		a++;
	}

	return (0);
}

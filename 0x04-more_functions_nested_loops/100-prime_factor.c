#include <stdio.h>
/**
 * main - printing the prime factors of a value
 * @n: the value
 * Return: void
 */
int main(void)
{
	long int n;
	int i;

	n = 612852475143;

	if (n % 2 == 0)
	{
		printf("%d, ", 2);
		n /= 2;
	}
	for (i = 3; i * i <= n; i += 2)
	{
		if (n % i == 0)
		{
			printf("%d, ", i);
			n /= i;
		}
	}
	if (n > 1)
	{
		printf("%ld", n);
	}
	printf("\n");
	return (0);
}


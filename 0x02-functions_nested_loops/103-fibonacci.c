#include <stdio.h>
/**
 * main - printing even fibonacci numbers
 * Return: always o success
 */
int main(void)
{
	int i;

	int long k = 1, j = 0, sum = 0;

	for (i = 0; i <= 4000000; ++i)
	{
		k = k + j;
		j = k - j;
		if (k % 2 == 0)
		{
		sum += k;
		}
	}
	printf("%ld", sum);
	printf("\n");

	return (0);
}


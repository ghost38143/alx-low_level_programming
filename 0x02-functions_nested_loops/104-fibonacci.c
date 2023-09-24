#include <stdio.h>
/**
 * main - printing the first 98 fibonacci numbers
 * Return: always 0 success
 */
int main(void)
{
	int i;

	long int k = 1;
	long int j = 0;

	for (i = 0; i < 98; ++i)
	{
		k = k + j;
		j = k - j;
		printf("%ld, ", k);
	}
}

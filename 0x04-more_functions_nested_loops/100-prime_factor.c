#include <stdio.h>
#include <math.h>

void primeFactors(long int n)
{
	int i;

	while (n % 2 == 0)
	{
		printf("%d ", 2);
		n = n / 2;
	}
	for (i = 3; i * i <= n; i = i + 2)
	{
		while (n % i == 0)
		{
			printf("%d ", i);
			n = n / i;
		}
	}
	if (n > 2)
	{
		printf("%ld ", n);
	}
}
int main(void)
{
	long int n = 612852475143;

	if (n <= 1)
      	{
		printf("Prime factors are not defined for numbers less than or equal to 1.\n");
	}
	else
	{
		printf("Prime factors of %ld are: ", n);
		primeFactors(n);
		printf("\n");
	}
	return (0);
}

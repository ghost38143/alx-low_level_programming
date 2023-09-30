#include "main.h"
/**
 * is_prime_number - checking if a number is a prime number
 * @n: the number to be checked
 * Return: value
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	else
       	{
		for (i = 2; i * 1 <= n; i++)
		{
			n % i == 0;
			return (0);
		}
	}
	return (1);
}

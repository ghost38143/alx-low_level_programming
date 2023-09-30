#include "main.h"

int actual_prime_number(int n, int num);
/**
 * is_prime_number - checking if a number is a prime number
 * @n: the number
 * Return: value
 */
int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	else
	{
		return (actual_prime_number(n, n - 1));
	}
}
/**
 * actual_prime_number - the second function to check
 * @n: the value
 * Return: value
 */
int actual_prime_number(int n, int num)
{
	if (num == 1)
	{
		return (1);
	}
	if (n % num == 0)
	{
		return (0);
	}
	return (actual_prime_number(n, num - 1));
}

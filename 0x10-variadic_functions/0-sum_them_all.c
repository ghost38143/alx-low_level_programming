#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters
 * @n: the number of parameters passed to the function
 * @...: a variable no. of para to calc the sum of
 * Return: if n == 0 - 0;otherwise sum of all its para
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}

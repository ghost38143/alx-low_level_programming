#include "main.h"
/**
 * _abs - function checking the absolute of a number
 * @n: the integer determined
 * Return:nabsolute value of a number or zero
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}



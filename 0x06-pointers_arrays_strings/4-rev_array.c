#include "main.h"
#include <stdio.h>
/**
 * reverse_array - printing an array in reversee
 * @a: the array
 * @n: the size of the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0, j;

	j = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = j;
}


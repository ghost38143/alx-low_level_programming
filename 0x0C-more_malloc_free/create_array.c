#include <stdio.h>
#include <stdlib.h>
/**
 * main _ creating an array
 * Return: nothing
 */
int main(void)
{
	int n;
	int i;
	printf("enter the value of your array\n");
	scanf("%d", &n);

	int *A = malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
	{
		A[i] = i + 1;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	return (0);
}
		


